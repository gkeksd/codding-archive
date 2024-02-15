#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int arr[3];
    int i = 0; int max;

    printf("세 개의 정수를 입력하시오");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    max = arr[0];

    for (i = 0; i < 3; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("최댓값: %d", max);
    return 0;
}