#include<stdio.h>
void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

void sort(int* a) {
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}

int main() {
	int arr[5] = {5, 4, 1, 7, 3};
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}printf("\n");
    sort(arr);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
}