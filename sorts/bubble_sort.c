#include <stdio.h>

/* 1. 从当前元素起，向后依次比较每一对相邻元素，若逆序则交换 */
/* 2. 对所有元素均重复以上步骤，直至最后一个元素 */
void bubble_sort(int arr[], int len) {
	for (int i = 0;i < len - 1;i++) {	/* 外循环为排序趟数，len个数进行len-1趟 */
		for (int j = 0;j < len - i - 1;j++) {	/* 内循环为每趟比较的次数，第i趟比较len-i次 */
			if (arr[j] > arr[j + 1]) {	/* 相邻元素比较，若逆序则交换（升序为左大于右，逆序反之） */
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int arr[5] = {3,6,2,1,7};
	bubble_sort(arr, 5);
	for (int i = 0;i < 5;i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}