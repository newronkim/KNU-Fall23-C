#include<stdio.h>

int main() {
	char season;

	printf("�� : A�Ǵ� a\n");
	printf("���� : S�Ǵ� s\n");
	printf("���� : D�Ǵ� d\n");
	printf("�ܿ� : F�Ǵ� f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season) 
	{
	case 'A':
	case 'a':
		printf("������ ���� : ��\n");
		printf("�޼��� : ������ �һ��ϴ� ����\n");

	case 'S':
	case 's':
		printf("������ ���� : ����\n");
		printf("�޼��� : �ÿ��� ����� ���� ����\n");

	case 'D':
	case 'd':
		printf("������ ���� : ����\n");
		printf("�޼��� : ��İ� ������ ǳ���� ����\n");

	case 'F':
	case 'f':
		printf("������ ���� : �ܿ�\n");
		printf("�޼��� : ���Ͼ� ���� ���� ��Ű�� ���� ����\n");

	defult:
		printf("������ ���� : ����\n");
		printf("���ĺ��� ��ҹ��� ���� ���� A, S, D, F�� ���˴ϴ�\n");
		break;
	}
	return 0;
}