#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int Palindrome(char* str) {
    int i;
    int str_L;
    int state = 1;

    str_L = strlen(str);
    for (i = 0; i < str_L / 2; i++) {
        if (str[i] != str[str_L - 1 - i]) {
            state = 0;
            break;
        }
    }
    return state;
}

int main(int argc, char* argv[]) {

    char inputStr[10];
    int i;
    int chk;

    printf("���ڿ��� �Է��Ͻÿ�? ");
    scanf("%s", inputStr);

    chk = Palindrome(inputStr); //ȸ�� üũ 

    if (chk == 1) printf("true\n");
    else printf("false\n");

    system("pause");
    return 0;
}
