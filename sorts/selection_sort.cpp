#include <iostream>
#include <vector>

using namespace std;
template<typename T>

void selection_sort(vector<T>& arr) {
	for (int i = 0;i < arr.size() - 1;i++) {
		int min = i;
		for (int j = i + 1;j < arr.size();j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

int main(int argc, char *argv[]) {
	vector<int> vec;

	int arr[7] = {4,5,3,2,51,34,542};
	for (int i = 0;i < 7;i++) {
		vec.push_back(arr[i]);
	}
	selection_sort(vec);
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << *v << ' ';
		v++;
	}
	cout << endl;
	return 0;
}