#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    double num1, num2;

    printf("두 개의 실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);
    double sum = num1 + num2;
    double mns = num1 - num2;
    double mtp = num1 * num2;
    double quo = num1 / num2;

    printf("합: %lf, 차: %lf, 곱: %lf, 몫: %lf", sum, mns, mtp, quo);

    return 0;
}