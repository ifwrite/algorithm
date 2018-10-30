//
//  hasCycle.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/30.
//  Copyright © 2018 swifterfit. All rights reserved.
//  141. Linked List Cycle
//  https://leetcode.com/problems/linked-list-cycle/

#include <stdio.h>

struct listNode {
    int val;
    struct listNode *next;
};

int hasCycle(struct listNode *head) {
    
    if (head == NULL) {
        return 0;
    }
    struct listNode *slow = head;
    struct listNode *fast = head;
    
    //fast走的快，有等于NULL的时候。证明没环
    //如果有环，一个遍历快，一个遍历慢，一定会相交再某点
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }
    
    return 0;
}
