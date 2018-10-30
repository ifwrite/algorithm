//
//  designLinkedList.h
//  linkedList
//
//  Created by 苏亮 on 2018/10/30.
//  Copyright © 2018 swifterfit. All rights reserved.

#ifndef designLinkedList_h
#define designLinkedList_h

#include <stdio.h>

typedef struct A{
    int val;
    struct A *next;
} MyLinkedList;

void printLinkedList(MyLinkedList *obj);
MyLinkedList* myLinkedListCreate(void);
int myLinkedListGet(MyLinkedList* obj, int index);
void myLinkedListAddAtHead(MyLinkedList* obj, int val);
void myLinkedListAddAtTail(MyLinkedList* obj, int val);
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val);
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index);
void myLinkedListFree(MyLinkedList* obj);

#endif /* designLinkedList_h */
