#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> 

int main() {
    int roll = pow(10, 9);
    double x = 0;
    double y = 0;
    double z = 0;
    int pick = pow(10, 7);
    int percent = 1;

    int circle = 0;
    double k;
    double result;
    srand(time(NULL));

    for (int i = 1; i <= roll; i++) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        z = x * x + y * y;
        if (z <= 1) {
            circle++;
        }
        if (i % pick == 0) {
            k = (double)circle / i;
            result = (double)k * 4;
            printf("%d%% ����, ���� ������: %f ", percent, result);
           
            int numSquares = (percent * 20) / 100;

            for (int j = 0; j < 20; j++) {
                if (j < numSquares) {
                    printf("��");
                }
                else {
                    printf("��");
                }
            }
            printf("\n");
            percent++;
        }
    }
    printf("���� ������: %f", result);
}