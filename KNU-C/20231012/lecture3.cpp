#include<stdio.h>
int main() {
	int score[5] = { 87, 92, 89, 98, 78 };

	printf("score[5] = {87, 92, 89, 98, 78} 배열 요소 출력\n");

	int* p_score = score;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", i, *p_score);
		p_score++;
	}	

	return 0;
}

/*  세 번 반복
	int* p_score = score+1;
	int* p_score = &score[1];

	for (int i = 0; i < 3; i++) {
		printf("%d\n", i, *p_score);
		p_score++;
}*/