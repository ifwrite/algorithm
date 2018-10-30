//
//  designLinkedList.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/30.
//  Copyright © 2018 swifterfit. All rights reserved.
//  707. Design Linked List
//  https://leetcode.com/problems/design-linked-list/


#include "designLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void printLinkedList(MyLinkedList *obj) {
    MyLinkedList *pst = obj->next;
    printf("\r\n[%d]--------",__LINE__);
    while (pst!=0)
    {
        printf("%d,",pst->val);
        pst = pst->next;
    }
}

/** Initialize your data structure here. */
MyLinkedList* myLinkedListCreate(void) {
    MyLinkedList *head;
    
    head = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    head->val = 0;
    head->next = 0;
    
    return head;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* pst;
    int i=0;
    
    if (obj == 0 || obj->next == 0)
    {
        return -1;
    }
    
    printLinkedList(obj);
    pst = obj->next;
    while (pst!=0)
    {
        if (i==index)
        {
            return pst->val;
        }
        else
        {
            i++;
            pst = pst->next;
        }
    }
    
    return -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* pst;
    
    if (obj == 0)
    {
        return;
    }
    
    pst =  (MyLinkedList *)malloc(sizeof(MyLinkedList));
    pst->val = val;
    pst->next = obj->next;
    obj->next = pst;
    printLinkedList(obj);
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* pst,*tmp;
    
    if (obj == 0)
    {
        return;
    }
    
    pst =  (MyLinkedList *)malloc(sizeof(MyLinkedList));
    pst->val = val;
    pst->next = 0;
    if (obj->next == 0)
    {
        obj->next = pst;
    }
    else
    {
        tmp = obj;
        while (tmp->next!=0)
        {
            tmp = tmp->next;
        }
        tmp->next = pst;
    }
    printLinkedList(obj);
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList* pst,*pre,*tmp;
    int i=0;
    
    if (obj == 0 || index < 0)
    {
        return;
    }
    
    if (index == 0)
    {
        tmp =  (MyLinkedList *)malloc(sizeof(MyLinkedList));
        tmp->val = val;
        tmp->next = obj->next;
        obj->next = tmp;
    }
    else
    {
        pre = obj;
        pst = obj->next;
        i=0;
        while (i<index && pst!=0)
        {
            pre = pst;
            pst = pst->next;
            i++;
        }
        if (i==index)
        {
            tmp =  (MyLinkedList *)malloc(sizeof(MyLinkedList));
            tmp->val = val;
            tmp->next = pst;
            pre->next = tmp;
        }
    }
    printLinkedList(obj);
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    MyLinkedList* pst,*pre,*tmp;
    int i=0;
    
    if (obj == 0 || obj->next == 0)
    {
        return;
    }
    
    if (index == 0)
    {
        tmp = obj->next;
        obj->next = tmp->next;
        free(tmp);
    }
    else
    {
        pre = obj;
        pst = obj->next;
        while (i<index && pst!=0)
        {
            pre = pst;
            pst = pst->next;
            i++;
        }
        if (i==index && pst!=0)
        {
            pre->next = pst->next;
            free(pst);
        }
    }
    printLinkedList(obj);
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList* pst;
    
    if (obj == 0)
    {
        return;
    }
    
    pst = obj->next;
    while(pst!=0)
    {
        obj->next = pst->next;
        free(pst);
        pst = obj->next;
    }
    free(obj);
}
