#include<stdio.h>

int main() {
	int jumsu;
	char greade;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
		printf("�߸� �Է�\n");
	else if (jumsu >= 90)
		printf("A\m");
	else if (jumsu >= 80)
		printf("B\m");
	else if (jumsu >= 70)
		printf("C\m");
	else if (jumsu >= 60)
		printf("D\m");
	else
		printf("F\n");
	return 0;
}