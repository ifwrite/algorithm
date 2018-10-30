//
//  detectCycle.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/30.
//  Copyright © 2018 swifterfit. All rights reserved.
//  142. Linked List Cycle II
//  https://leetcode.com/problems/linked-list-cycle-ii/

#include <stdio.h>

struct listNode {
    int val;
    struct listNode *next;
};

struct listNode *hasCycle(struct listNode *head) {
    
    if (head == NULL) {
        return NULL;
    }
    struct listNode *slow = head;
    struct listNode *fast = head;
    
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    
    if (slow != fast) {
        return NULL;
    }
    
    fast = head;
    while (fast != slow) {
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}

/*
 假定起点到环入口点的距离为 a，p1 和 p2 的相交点M与环入口点的距离为b，环路的周长为L，当 p1 和 p2 第一次相遇的时候，假定 p1 走了 n 步。那么有：
 
 p1走的路径： a+b ＝ n；
 p2走的路径： a+b+k*L = 2*n； p2 比 p1 多走了k圈环路，总路程是p1的2倍
 
 根据上述公式可以得到 k*L=a+b=n显然，如果从相遇点M开始，p1 再走 n 步的话，还可以再回到相遇点，同时p2从头开始走的话，经过n步，也会达到相遇点M。
 
 显然在这个步骤当中 p1 和 p2 只有前 a 步走的路径不同，所以当 p1 和 p2 再次重合的时候，必然是在链表的环路入口点上。
 */
