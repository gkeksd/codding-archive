#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {
    double radius;

    printf("구의 반지름을 입력하세요: ");
    scanf("%lf", &radius);

    printf("반지름 %lf인 구의 표면적은 %lf입니다\n", radius, 4 * pi * pow(radius, 2));
    printf("반지름 %lf인 구의 부피는 %g입니다.\n", radius, (double)4.0 / 3.0 * pi * pow(radius, 3));

    return 0;
}