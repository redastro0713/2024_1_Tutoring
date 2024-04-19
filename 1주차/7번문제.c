#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseString(char* s)
{
    int cnt;
    int temp;

    while (*(s + cnt) != 0) cnt++;

    if (cnt % 2 == 0)
    {
        for (int i = 0; i < cnt / 2; i++)
        {
            temp = *(s + i);
            *(s + i) = *(s + cnt - 1 - i);
            *(s + cnt - 1 - i) = temp;
        }
    }
    else 
    {

        for (int i = 0; i < (cnt + 1) / 2 ; i++)
        {
            temp = *(s + i);
            *(s + i) = *(s + cnt - 1 - i);
            *(s + cnt - 1 - i) = temp;

        }
    }

}

int main() 
{
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);

    reverseString(str);

    printf("뒤집힌 문자열: %s\n", str);

    return 0;
}