//
//  main.c
//  冒泡排序
//
//  Created by LIANG on 2017/1/25.
//  Copyright © 2017年 Emir. All rights reserved.
//

#include <stdio.h>

void bubble_sort(int arr[], int n);

int main(int argc, const char * argv[]) {

    int arr[8] = {1, 4, 6, 3, 66, 34, 21, 32};
    bubble_sort(arr, 8);
    
    //打印排序结果
    int i;
    printf("========Result=========\n");
    for (i = 0; i < 8; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n========End=========\n");

    return 0;
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 1; j < n - i; j++) {
            
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
