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
            printf("%d%% 진행, 현재 원주율: %f ", percent, result);
            for (int i = 0; i < percent; i += 4)
            {
             printf("■");
            };
            printf("\n");
            percent++;
        }
    }
    printf("최종 원주율: %f", result);
}