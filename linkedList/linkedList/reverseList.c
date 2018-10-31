//
//  reverseList.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/31.
//  Copyright © 2018 swifterfit. All rights reserved.
//  206. Reverse Linked List
//  https://leetcode.com/problems/reverse-linked-list/

#include <stdio.h>

struct listNode {
    int val;
    struct listNode *next;
};

/*
 abcd反转，假如bcd已经反转好了，问题变为a和bcd反转，bcd如何反转，可以看成cd反转好了。b和cd的反转，
 最后变成d的反转，所以递归了。
 从最后的节点开始向前遍历.把head的next的next指向head，
 */
struct listNode* reverseList(struct listNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct listNode *p = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return p;
}

/*
 三个指针操作，pre记录为前一个，断链tmp保存cur->next; cur->next指向pre, pre向前走，cur向前走。
 */
struct listNode* reverseList1(struct listNode* head) {
    struct listNode *pre = NULL;
    struct listNode *cur = head;
    while (cur) {
        struct listNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}
