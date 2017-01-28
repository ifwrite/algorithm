//
//  main.c
//  快速排序
//
//  Created by LIANG on 2017/1/28.
//  Copyright © 2017年 Emir. All rights reserved.
//

#include <stdio.h>

void quick_sort(int arr[], int num);

int main(int argc, const char * argv[]) {
    // insert code here...

    int arr[7] = {5, 8, 7, 1, 6, 3, 10};
    quick_sort(arr, 7);
    
    //打印排序结果
    int i;
    printf("========Result=========\n");
    for (i = 0; i < 7; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n========End=========\n");

    return 0;
}

void quick_sort(int arr[], int num)
{
    int l = 0;  //左边位置
    int r = num - 1;    //右边位置
    int key = arr[0];   //参照点
    
    if (num > 1) {
     
        while (l != r) {    //左右指针相遇，遍历结束
            for (; l < r; r--) {    //尾指针向前遍历
                if (arr[r] < key) {
                    arr[l] = arr[r];
                    break;
                }
            }
            
            for (; l < r; l++) {    //首指针向后遍历
                if (arr[l] > key) {
                    arr[r] = arr[l];
                    break;
                }
            }
            arr[l] = key;
        }
        quick_sort(arr, l);
        quick_sort(arr + l + 1, num - l - 1);
    }
}
