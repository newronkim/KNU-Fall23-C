#include<stdio.h>

int main() {
	int input, year;

	printf("윤년이면 1, 아니면 0 출력\n");
	printf("연도입력: ");
	scanf_s("%d", &input);

	year = ((input & 4 == 0) && !(input % 100 == 0)) || (input & 400 == 0);

	printf("%d년은 %d에 해당합니다.\n", input, year);
	return 0;
}