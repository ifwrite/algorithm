//
//  mergeTwoLists.c
//  linkedList
//
//  Created by 苏亮 on 2018/11/19.
//  Copyright © 2018 swifterfit. All rights reserved.
//  21. Merge Two Sorted Lists
//  https://leetcode.com/problems/merge-two-sorted-lists/

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/// 正常遍历
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur = head;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        }else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    cur->next = l1 ? l1 : l2;
    return head->next;
}
