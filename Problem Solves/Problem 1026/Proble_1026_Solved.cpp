#include<iostream>

void Merge(int* arr, int start, int mid, int end, bool reverse = false) {
	int i = start, j = mid + 1, k = 0, *sorted = new int[end - start + 1];

	while (i <= mid && j <= end) sorted[k++] = arr[((!reverse == arr[i] <= arr[j]) ? i++ : j++)];
	while ((i > mid) ? (j <= end) : (i <= mid)) sorted[k++] = arr[(i > mid) ? j++ : i++];

	for (i = start, k = 0; i <= end; i++, k++) arr[i] = sorted[k];

	delete[] sorted;
}

void MergeSort(int* arr, int start, int end, bool reverse = false) {
	if (start >= end) return;
	int mid = (start + end) / 2;
	MergeSort(arr, start, mid, reverse);
	MergeSort(arr, mid + 1, end, reverse);
	Merge(arr, start, mid, end, reverse);
}

int main(void) {
	int n, i, res = 0;
	std::cin >> n;

	int* a = new int[n + 1], * b = new int[n + 1];

	for (i = 0; i < n; i++) std::cin >> a[i];
	for (i = 0; i < n; i++) std::cin >> b[i];

	MergeSort(a, 0, n - 1);
	MergeSort(b, 0, n - 1, true);

	for (i = 0; i < n; i++) res += a[i] * b[i];
	std::cout << res << std::endl;
	

	delete[] a;
	delete[] b;
	return 0;
}
