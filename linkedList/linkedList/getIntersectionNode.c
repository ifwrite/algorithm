//
//  getIntersectionNode.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/31.
//  Copyright © 2018 swifterfit. All rights reserved.
//  160. Intersection of Two Linked Lists
//  https://leetcode.com/problems/intersection-of-two-linked-lists/

#include <stdio.h>

struct listNode {
    int val;
    struct listNode *next;
};

int lengthOfLinkedList(struct listNode *head) {
    int i = 0;
    while (head != NULL) {
        head = head->next;
        i++;
    }
    return i;
}

/*
 长的链表移动两条链表长度之差，
 两条链表一起前进，
 相遇就就相交
 */
struct listNode *getIntersectionNode(struct listNode *headA, struct listNode *headB) {
    
    struct listNode *a = headA;
    struct listNode *b = headB;
    
    int al = lengthOfLinkedList(a);
    int bl = lengthOfLinkedList(b);
    
    if (al > bl) {
        for (int i = 0; i < al - bl; i++) {
            a = a->next;
        }
    }else if (al < bl) {
        for (int i = 0; i < bl - al; i++) {
            b = b->next;
        }
    }
    while (a != b) {
        a = a->next;
        b = b->next;
    }
    return a;
}

