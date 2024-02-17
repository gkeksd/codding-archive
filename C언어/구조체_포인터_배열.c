#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point2D;

int main() {
    Point2D *p[3]; //크기가 3인 구조체 포인터 배열

    //구조체 포인터 배열 전체 크기에서 구조체 포인터의 크기로 나눠서
    //요소 개수를 구함
    for (int i=0; i < sizeof(p) / sizeof(Point2D *); i++) {
        p[i] = malloc(sizeof(Point2D)); //각 요소에 구조체 크기만큼 메모리 할당
    }

    p[0]->x = 10; //화살표 연산자로 멤버에 접근
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;
    p[2]->x = 50;
    p[2]->y = 60;

    printf("%d %d\n", p[0]->x, p[0]->y);
    printf("%d %d\n", p[1]->x, p[1]->y);
    printf("%d %d\n", p[2]->x, p[2]->y);

    for (int i=0; i < sizeof(p) / sizeof(Point2D *); i++) {
        free(p[i]); //각 요소의 동적 메모리 해제
    }

    return 0;
}