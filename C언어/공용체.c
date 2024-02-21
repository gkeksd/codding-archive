#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

union box {
    short candy;
    float snack;
    char doll[8];
};

int main() {
    union box b1;

    printf("%d\n", sizeof(b1)); //sizeof(union box)나 sizeof b1으로도 크기를 구할 수 있음

    strcpy(b1.doll, "bear");

    printf("%d\n", b1.candy);
    printf("%f\n", b1.snack);
    printf("%s\n", b1.doll);

    return 0;
}
