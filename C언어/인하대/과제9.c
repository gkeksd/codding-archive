#include <stdio.h>

int main() {
    double x, y;

    printf("x좌표를 입력하시오: ");
    scanf("%lf", &x);
    printf("y좌표를 입력하시오: ");
    scanf("%lf", &y);

    (x>0 && y>0)? printf("1사분면") : printf("");
    (x<0 && y>0)? printf("2사분면") : printf("");
    (x<0 && y<0)? printf("3사분면") : printf("");
    (x>0 && y<0)? printf("4사분면") : printf("");
    
    return 0;
}