#include <stdio.h>
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int sub(int a, int b)
{
    int result;
    result = a - b;
    return result;
}
int mul(int a, int b)
{
    int result;
    result = a*b;
    return result;
}
float div(float a, float b)
{
    printf("%.3f", a / b);
}
int rem(int a, int b)
{
    int result;
    result = a%b;
    return result;
}
int cal()
{
    float n, m;
    int a;
    char yn;
    do {
        printf("=======================\n");
        printf(" 1. 더하기\n 2. 빼기\n 3. 곱하기\n 4. 나누기\n 5. 나머지\n");
        printf("=======================\n");
        printf("어떤 연산을 원하십니까(번호로 입력):");
        scanf("%d", &a);
        getchar();
        printf("정수를 입력하시오:");
        scanf("%f %f", &n, &m);
        getchar();
        switch (a) {
            case 1:
                printf("%d\n", add(n, m));
                break;
            case 2:
                printf("%d\n", sub(n, m));
                break;
            case 3:
                printf("%d\n", mul(n, m));
                break;
            case 4: 
                printf("%f\n", div(n, m));
                break;
            case 5:
                printf("%d\n", rem(n, m));
                break;
            default:
                continue;
        }
        printf("연산을 계속하시겠습니까?(Y/N)");
        scanf("%c", &yn);
    } while (yn == 'Y' || yn == 'y');
}
int main()
{
    cal();
    
    return 0;
}
