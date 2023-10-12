#include<stdio.h>
void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

void sort(int* a) {
	for (int i = 0; i < 4; i++) {
		int min = i;
		for (int j = i + 1; j < 4; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(&a[i], &a[min]);
		}
	}
}

int main() {
	int arr[5] = {5, 4, 1, 2, 3};
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}printf("\n");
    sort(arr, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
}