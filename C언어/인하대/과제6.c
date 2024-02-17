#include <stdio.h>

int main() {
    int x, y;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("%d << %d의 연산결과: %d", x, y, x << y);

    return 0;
}