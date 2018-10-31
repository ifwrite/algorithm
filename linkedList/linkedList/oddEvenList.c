//
//  oddEvenList.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/31.
//  Copyright © 2018 swifterfit. All rights reserved.
//  328. Odd Even Linked List
//  https://leetcode.com/problems/odd-even-linked-list/

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/// 比较常规做法，odd为奇数游标，even偶数游标，先推进odd，再推进even，最后odd是奇数最后一个节点，把next指到偶数第一个节点evenHead
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *odd = head;
    struct ListNode *evenHead = odd->next;
    struct ListNode *even = odd->next;
    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    
    return head;
}
