//
//  removeElements.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/31.
//  Copyright © 2018 swifterfit. All rights reserved.
//  203. Remove Linked List Elements
//  https://leetcode.com/problems/remove-linked-list-elements/

#include <stdio.h>

struct listNode {
    int val;
    struct listNode *next;
};

/// 常规解法，应该能看懂，
struct listNode* removeElements(struct listNode* head, int val) {
    struct listNode *cur = head;
    
    while (cur->next) {
        if (cur->next->val == val) {
            cur->next = cur->next->next;
        }else {
            cur = cur->next;
        }
    }
    return head->val == val ? head->next : head;
}

/*
 递归，暂时不好解释,大致上分成递归的小任务是， head遍历，head->next的值取决于下个节点是不是要删除的节点。
 比如abc，要删除b， 当前是a，开始遍历，检查a->next是不是要删除的值，是的话a->next = a->next->next,不是的话正常遍历
*/
struct listNode* removeElements1(struct listNode* head, int val) {
    
    head->next = removeElements(head->next, val);
    return head->val == val ? head->next : head;
}

