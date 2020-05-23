#include <stdio.h>
int comparison(const char* one, const char* two) {
    for (; (*one != '\0') || (*two != '\0'); one++, two++) {
        if (*one != *two) {
            printf("�� ���ڿ��� �ٸ��ϴ�.");
            return -1;
        }
    }
    printf("�� ���ڿ��� �����ϴ�.");
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

    printf("ù ��° ���ڿ��� �Է��ϼ���");
    gets_s(str1, sizeof(str1));
    printf("�� ��° ���ڿ��� �Է��ϼ���");
    gets_s(str2, sizeof(str2));

    comparison(str1, str2);
    addUnderBar(str1);
}
