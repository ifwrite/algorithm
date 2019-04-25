#include <stdio.h>

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) { //默认第一个元素已经排序，遍历后面未排序的，一次完成一个插入
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {    //如果已排序元素大于新元素key，已排序元素后移，直到不满足条件，
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;   //新元素插入到这个位置后面
    }
}

int main(int argc, char *argv[]) {
    int arr[4] = {3,5,1,7};
    insertion_sort(arr, 4);
    for (int i = 0; i < 4; i++) {
        printf("%d\t", arr[i]);
    }
    putchar('\n');
    return 0;
}