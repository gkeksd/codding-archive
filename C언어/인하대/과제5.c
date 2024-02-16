#include <stdio.h>

int main() {
    int num1;

    printf("정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("입력한 정수 %d의 2의 보수: %d", num1, -num1 + 1);

    return 0;
}