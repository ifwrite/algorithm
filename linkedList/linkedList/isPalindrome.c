//
//  isPalindrome.c
//  linkedList
//
//  Created by 苏亮 on 2018/11/19.
//  Copyright © 2018 swifterfit. All rights reserved.
//  234. Palindrome Linked List
//  https://leetcode.com/problems/palindrome-linked-list/

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

///反转
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre = NULL;
    struct ListNode *cur = head;
    while (cur) {
        struct ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

///快慢指针遍历，结束取slow为链表中点，以中点为head反转后半部分，最后遍历比较
int isPalindrome(struct ListNode* head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    struct ListNode *half = reverseList(slow);
    
    struct ListNode *p = head;
    struct ListNode *q = half;
    while (q && q && p->val == q->val) {
        p = p->next;
        q = q->next;
    }
    return p == NULL;
}
