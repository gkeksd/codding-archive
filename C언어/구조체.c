#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// 익명 구조체 정의
typedef struct
{
    char name[20];
    int age;
    char address[100];
} Person;

int main(){
    Person p1; //구조체 변수 정의

    strcpy(p1.name, "정준교");
    p1.age = 20;
    strcpy(p1.address, "서울시 성북구 길음 1동");

    printf("이름=%s\n나이=%d\n주소=%s\n", p1.name, p1.age, p1.address);

    return 0;
}
