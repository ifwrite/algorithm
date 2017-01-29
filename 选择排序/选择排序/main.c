//
//  main.c
//  选择排序
//
//  Created by LIANG on 2017/1/29.
//  Copyright © 2017年 Emir. All rights reserved.
//

#include <stdio.h>

void select_sort(int arr[], int num);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[8] = {1, 4, 6, 3, 66, 34, 21, 32};
    select_sort(arr, 8);
    
    //打印排序结果
    int i;
    printf("========Result=========\n");
    for (i = 0; i < 8; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n========End=========\n");

    return 0;
}

void select_sort(int arr[], int num)
{
    int i, j;
    
    //遍历n - 1次
    for (i = 0; i < num - 1; i++) {
        
        //假设mini_index的下标最小
        int mini_index = i;
        
        //找出第i小的数的位置
        for (j = i + 1; j < num; j++) {
            
            if (arr[j] < arr[mini_index]) {
                mini_index = j;
            }
        }
        
        //将第i小的数，放在第i个位置，刚好的话就不交换
        if (i != mini_index) {
            
            int temp = arr[i];
            arr[i] = arr[mini_index];
            arr[mini_index] = temp;
        }
    }
}
