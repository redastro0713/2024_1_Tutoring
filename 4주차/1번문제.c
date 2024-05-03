#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    while(1)
    {
    int n;

    printf("\n길이를 입력하세요 : ");
    scanf("%d", &n);

    char* number = (char*)malloc(sizeof(char) * (n + 1));

    printf("정수 하나를 입력하세요: ");
    for (int i = 0; i < n+1; i++)
        scanf("%c", &number[i]); // 정수 입력 받기

    if (number[0] = 0)
    {
        break;
    }
    
    printf("입력한 정수는: ");

    for (int i = 0; i < n+1; i++)
        {
            if (number[i] >= 48 && number[i] <= 57)
            {
                printf("%c", number[i]);
            }
        }
    free(number); 
    }  
    return 0;
}