#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void max_heapify(int arr[], int start, int end) {
	//父子节点
	int dad = start;
	int son = dad * 2 + 1;
	while (son <= end) {	// 子节点在范围内作比较
		if (son + 1 <= end && arr[son] < arr[son + 1]) { //比较左右节点选择大的
			son++;
		}
		if (arr[dad] > arr[son]) {	//父节点大于子节点，不需处理
			return;
		}else {
			swap(&arr[dad], &arr[son]);
			dad = son;
			son = dad * 2 + 1;
		}
	}
}

void heap_sort(int arr[], int len) {
	//从最后一个非叶子结点从下至上，从右至左调整结构
	for (int i = len / 2 - 1;i >= 0;i--) {
		max_heapify(arr, i, len - 1);
	}
	//调整堆结构，堆顶元素和末尾元素进行交换
	for (int i = len - 1;i > 0;i--) {
		swap(&arr[0], &arr[i]);
		max_heapify(arr, 0, i - 1);
	}
}

int main(int argc, char *argv[]) {
	int arr[] = { 3, 5, 3, 0, 8, 6, 1, 5, 8, 6, 2, 4, 9, 4, 7, 0, 1, 8, 9, 7, 3, 1, 2, 5, 9, 7, 4, 0, 2, 6 };
	int len = (int) sizeof(arr) / sizeof(*arr);
	heap_sort(arr, len);
	for (int i = 0;i < len;i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
