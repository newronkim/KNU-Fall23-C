#include <stdio.h>

int main(void) {
    int cnt, hap = 0;

    for (cnt = 1; cnt <= 10; cnt += 2) {
        hap += cnt;
        printf("%d���� ������ ���: hap = %d\n", cnt, hap);
    }
    printf("1 + 3 + ~ + 7 + 9 = %02d\n", hap);
    return 0;
}