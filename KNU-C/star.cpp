#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			printf(" ");
		}
		for (int n = 0; n < i * 2 + 1; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}