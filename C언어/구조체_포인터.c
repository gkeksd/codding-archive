#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// 익명 구조체 정의
typedef struct
{
    char name[20];
    int age;
    char address[100];
} Person;

int main() {
    Person *p1 = malloc(sizeof(Person)); //구조체 포인터 선언 후 메모리 할당

    //화살표 연산자로 구조체 멤버에 접근
    strcpy(p1->name, "정준교"); //(*p1).name으로도 접근 가능
    p1->age = 20;
    strcpy(p1->address, "서울시 성북구 길음 1동");

    printf("이름=%s\n나이=%d\n주소=%s\n", p1->name, p1->age, p1->address);

    free(p1); //동적 메모리 할당 해제

    return 0;
}