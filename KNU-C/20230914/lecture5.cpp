#include<stdio.h>

int main() {
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("입력한 정수 %d는 \"짝수\"입니다.", num);
	else
		printf("입력한 정수 %d는 \"홀수\"입니다.", num);

	return 0;
}