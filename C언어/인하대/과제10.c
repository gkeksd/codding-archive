#include <stdio.h>

int main() {
    char a, b, c, d;
    int x;

    printf("첫번째 문자를 입력하시오: ");
    scanf("%c%*c", &a);
    printf("두번째 문자를 입력하시오: ");
    scanf("%c%*c", &b);
    printf("세번째 문자를 입력하시오: ");
    scanf("%c%*c", &c);
    printf("네번째 문자를 입력하시오: ");
    scanf("%c%*c", &d);
    
    x=(d<<24) | (c<<16) | (b<<8) | a;

    printf("결과값: %x", x);

    return 0;
}