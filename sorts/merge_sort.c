#include <stdio.h>

void merge(int arr[], int left, int mid, int right, int temp[]) {
	int i = left;	//左序列指针
	int j = mid + 1;	//右序列指针
	int t = 0;	//临时数组指针
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[t++] = arr[i++];
		}else {
			temp[t++] = arr[j++];
		}
	}
	while (i <= mid) {	//将左边剩余元素填充进temp中
		temp[t++] = arr[i++];
	}
	while (j <= right) {	//将右序列剩余元素填充进temp中
		temp[t++] = arr[j++];
	}
	//将temp中的元素全部拷贝到原数组中
	t = 0;
	while (left <= right) {
		arr[left++] = temp[t++];
	}
}

void merge_sort(int arr[], int left, int right, int temp[]) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(arr, left, mid, temp);	//左边归并排序，使得左子序列有序
		merge_sort(arr, mid + 1, right, temp);	//右边归并排序，使得右子序列有序
		merge(arr, left, mid, right, temp);	//将两个有序子数组合并操作
	}
}

int main(int argc, char *argv[]) {
	
	int arr[] = {5,1,7,3,6};
	int len = (int) sizeof(arr) / sizeof(*arr);
	int temp[5] = {0};	//在排序前，先建好一个长度等于原数组长度的临时数组，避免递归中频繁开辟空间
	
	merge_sort(arr, 0, len - 1, temp);
	for (int i = 0;i < 5;i++) {
		printf("%d\t", arr[i]);
	}
}