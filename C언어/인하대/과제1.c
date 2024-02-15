#include <stdio.h>

int main(){
    int num1, num2;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    int num3 = num1 / num2;
    int num4 = num1 % num2;

    printf("몫: %d, 나머지: %d", &num3, &num4);

    return 0;
}
