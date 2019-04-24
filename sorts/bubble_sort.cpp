#include <iostream>

using namespace std;

template<typename T>

void bubble_sort(T arr[], int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int arr[] = {4,53,6,23,7,26};
	int len = (int)sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for (int i = 0;i < len;i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}