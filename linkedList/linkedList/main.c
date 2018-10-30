//
//  main.c
//  linkedList
//
//  Created by 苏亮 on 2018/10/30.
//  Copyright © 2018 swifterfit. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "designLinkedList.h"

int main(int argc, const char * argv[]) {

    MyLinkedList *linkedList = myLinkedListCreate();
    myLinkedListAddAtHead(linkedList, 1);
    myLinkedListAddAtTail(linkedList, 3);
    myLinkedListAddAtIndex(linkedList, 1, 2);
    int val = myLinkedListGet(linkedList, 1);
    printf("get: %d\n", val);
    myLinkedListDeleteAtIndex(linkedList, 1);
    int temp = myLinkedListGet(linkedList, 0);
    printf("get: %d\n", temp);

    return 0;
}
