//
//  main.c
//  冒泡排序
//
//  Created by LIANG on 2017/1/25.
//  Copyright © 2017年 Emir. All rights reserved.
//

#include <stdio.h>

void bubbleSort(int arr[], int n);

int main(int argc, const char * argv[]) {

    int arr[8] = {1, 4, 6, 3, 66, 34, 21, 32};
    bubbleSort(arr, 8);
    
    return 0;
}

void bubbleSort(int arr[], int n)
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
    
    //打印排序结果
    printf("========Result=========\n");
    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n========End=========\n");
}
