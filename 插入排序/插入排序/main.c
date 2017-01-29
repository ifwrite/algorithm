//
//  main.c
//  插入排序
//
//  Created by LIANG on 2017/1/29.
//  Copyright © 2017年 Emir. All rights reserved.
//

#include <stdio.h>

void insert_sort(int arr[], int num);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[8] = {1, 4, 6, 3, 66, 34, 21, 32};
    insert_sort(arr, 8);
    
    //打印排序结果
    int i;
    printf("========Result=========\n");
    for (i = 0; i < 8; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n========End=========\n");

    return 0;
}

void insert_sort(int arr[], int num)
{
    int i, j, temp;
    
    //进行num-1轮插入过程
    for(i = 1; i < num; i ++)
    {
        //待插入的记录temp
        temp = arr[i];
        
        //temp和有序记录的比较，从右到左依次
        for(j = i - 1; j >= 0; j --)
        {
            if(arr[j] > temp) //temp是小的，则j后移
            {
                arr[j + 1] = arr[j];
            }else   //temp是大的，就跳出循环，j+1就是temp的位置
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
