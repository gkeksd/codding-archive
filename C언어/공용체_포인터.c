#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union box {
    short candy;
    float snack;
    char doll[8];
};

int main() {
    union box *b1 = malloc(sizeof(union box)); //공용체 포인터 선언 후 메모리 할당

    printf("%d\n", sizeof(union box));

    strcpy(b1->doll, "bear");

    printf("%d\n", b1->candy);
    printf("%f\n", b1->snack);
    printf("%s\n", b1->doll);

    free(b1);

    return 0;
}