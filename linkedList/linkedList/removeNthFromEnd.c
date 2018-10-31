//
//  removeNthFromEnd.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/31.
//  Copyright © 2018 swifterfit. All rights reserved.
//  19. Remove Nth Node From End of List
//  https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include <stdio.h>
#include <stdlib.h>

struct listNode{
    int val;
    struct listNode *next;
};

/*
 q先走n距离遍历，q如果是NULL，说明n是链表长度，那么倒数n节点是head，移除head，返回head->next;
 如果q不是NULL，p和q开始一起遍历，直到q到达最后一个节点，qp之间的h差距一直是n，所以q到达最后的时候，p是n-1的节点。直接做删除操作
 */
struct listNode *removeNthFromEnd(struct listNode *head, int n) {
    
    struct listNode *p = head;
    struct listNode *q = head;
    for (int i = 0; i < n; i++) {
        q = q->next;
    }
    
    //n为链表长度
    if (q == NULL) {
        return head->next;
    }
    
    //一起遍历，qp直接的距离一直是n
    while (q->next) {
        q = q->next;
        q = p->next;
    }
    
    //删除相应节点
    q = p->next;
    p->next = p->next->next;
    free(q);
    return head;
}
