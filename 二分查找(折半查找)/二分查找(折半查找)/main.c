//
//  main.c
//  二分查找(折半查找)
//
//  Created by LIANG on 2017/1/30.
//  Copyright © 2017年 Emir. All rights reserved.
//
/**
 基本思想是：
    首先，将表中间位置记录的关键字与查找关键字比较，如果两者相等，则查找成功；否则利用中间位置记录将表分成前、后两个子表，如果中间位置记录的关键字大于查找关键字，
    则进一步查找前一子表，否则进一步查找后一子表。重复以上过程，直到找到满足条件的记录，使查找成功，或直到子表不存在为止，此时查找不成功。
 
 优点：
    折半查找法的优点是比较次数少，查找速度快，平均性能好;
 
 缺点：
    要求待查表为有序表，且插入删除困难。因此，折半查找方法适用于不经常变动而查找频繁的有序列表.
 
 时间复杂度为O(log(n))
 */
#include <stdio.h>

int binary_search(int arr[], int num, int key);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[8] = {1, 3, 4, 6, 21, 32, 34, 66};
    
    
    int input, result_index;
    
    while (1) {
        printf("\n请输人所要查找的元素：");
        scanf("%d", &input);
        result_index = binary_search(arr, 8, input);
        
        if (result_index != -1) {
            printf("查找成功位置：%d\n", result_index);
        }else {
            printf("查找失败\n");
        }
    }

    return 0;
}

int binary_search(int arr[], int num, int key)
{
    int left = 0;   //范围左边界
    int right = num - 1;    //范围右边界
    int middle;
    
    while (left <= right) { //范围不为空
        middle = (left + right) / 2;
        if (key < arr[middle]) {
            right = middle - 1; //小于，右边界左移
        }else if (key > arr[middle]) {
            left = middle + 1;  //大于，左边界右移
        }else {
            return middle;  //等于
        }
    }
    return -1;
}
