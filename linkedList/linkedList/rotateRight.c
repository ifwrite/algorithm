//
//  rotateRight.c
//  linkedList
//
//  Created by 苏亮 on 2018/11/19.
//  Copyright © 2018 swifterfit. All rights reserved.
//  61. Rotate List
//  https://leetcode.com/problems/rotate-list/

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/// 先计算链表长度，找到tail，变成环，k 取模运算，tail最后遍历len-k步，最后断开。
struct ListNode *rotateRight(struct ListNode *head, int k) {
    if (!head) {
        return NULL;
    }
    int len = 1;
    struct ListNode *new = head;
    struct ListNode *tail = head;
    while (tail->next) {
        tail = tail->next;
        len++;
    }
    tail->next = head;
    k %= len;
    for (int i = 0; i < len - k; i++) {
        tail = tail->next;
    }
    new = tail->next;
    tail->next = NULL;
    return new;
}
