#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*每循环一次找到最小的，和左侧交换，就是放在最左边，左边变成了已排序的序列，下一轮循环从已排序的下一个开始循环*/
void selection_sort(int arr[], int len) {
	for (int i = 0;i < len - 1;i++) {	//注意这里循环len - 1次
		int min = i;
		for (int j = i + 1;j < len;j++) {	//走訪未排序的元素
			if (arr[j] < arr[min]) {	//找到目前最小值
				min = j;	//紀錄最小值
			}
		}
		swap(&arr[min], &arr[i]);	//做交換
	}
}

int main(int argc, char *argv[]) {
	int arr[7] = {4,5,3,2,51,34,542};
	selection_sort(arr, 7);
	for (int i = 0;i < 7;i++) {
		printf("%d\t", arr[i]);
	}
	putchar('\n');
	return 0;
}