//
//  main.c
//  顺序查找
//
//  Created by LIANG on 2017/1/30.
//  Copyright © 2017年 Emir. All rights reserved.
//
/**
 基本思想是：
    从表的一端开始，顺序扫描线性表，依次将扫描到的结点关键宇和给定值K相比较。若当前扫描到的结点关键字与K相等，则查找成功；若扫描结束后，仍未找到关键字等于K的结点，
    则查找失败。
 
 顺序查找的优点：
 
 　  算法简单，且对表的结构无任何要求，无论是用向量还是用链表来存放结点，也无论结点之间是否按关键字有序，它都同样适用。
 
 顺序查找的缺点：
 
 　　查找效率低，因此，当n较大时不宜采用顺序查找。
 */
#include <stdio.h>

int order_search(int arr[], int num, int key);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int arr[8] = {1, 4, 6, 3, 66, 34, 21, 32};

    int input, result_index;

    while (1) {
        scanf("%d", &input);
        result_index = order_search(arr, 8, input);
        
        if (result_index != -1) {
            printf("查找成功位置：%d\n", result_index);
        }else {
            printf("查找失败\n");
        }
    }

    return 0;
}

int order_search(int arr[], int num, int key)
{
    int i;
    for (i = 0; i < num; i++) {
        if (arr[i] == key) {
            return i;   //查找成功，返回key的位置
        }
    }
    return -1;  //查找失败返回-1
}
