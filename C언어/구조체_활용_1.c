#include <stdio.h>

struct Phone {
    int areacode;
    unsigned long long number;
};

struct Person
{
    char name[20];
    int age;
    struct Phone phone; //구조체를 멤버로 가짐
};

int main() {
    struct Person p1;

    p1.phone.areacode = 82; //변수.멤버.멤버 순으로 접근해 값 할당
    p1.phone.number = 3045671234; //변수.멤버.멤버 순으로 접근해 값 할당

    printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

    return 0;
}