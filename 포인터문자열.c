#include <stdio.h>
int comparison(const char* one, const char* two) {
    for (; (*one != '\0') || (*two != '\0'); one++, two++) {
        if (*one != *two) {
            printf("두 문자열이 다릅니다.");
            return -1;
        }
    }
    printf("두 문자열이 같습니다.");
    return 0;
}

void addUnderBar(char* str) {
    while (*str) {
        if (*str == ' ') {
            *str = '_';
        }
        ++str;
    }
}

int main(void) {
    char str1[100];
    char str2[100];

    printf("첫 번째 문자열을 입력하세요");
    gets_s(str1, sizeof(str1));
    printf("두 번째 문자열을 입력하세요");
    gets_s(str2, sizeof(str2));

    comparison(str1, str2);
    addUnderBar(str1);
}
