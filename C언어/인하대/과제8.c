#include <stdio.h>

int main() {
    int BC, AC, AE;

    printf("BC의 길이를 입력하시오: ");
    scanf("%d", &BC);
    printf("AC의 길이를 입력하시오: ");
    scanf("%d", &AC);
    printf("AE의 길이를 입력하시오: ");
    scanf("%d", &AE);

    double DE = (AE * BC) / AC;

    printf("DE의 길이는 %g입니다.", (double)AE * BC / AC);

    return 0;
}