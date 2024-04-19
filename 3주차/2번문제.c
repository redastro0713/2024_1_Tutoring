#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1) 
    {
        char number[100] = "";

        printf("정수 하나를 입력하세요: ");
        scanf("%s", &number); // 정수 입력 받기

        printf("입력한 정수는: ");

        for (int i = 0; i < 100; i++)
        {
            if (number[i] >= 48 && number[i] <= 57)
            {
                printf("%c", number[i]);
            }
        }

       
        printf("\n");

        
            if (number[0] == 48 && number[1] == 0 && number[2] == 0)
            {
                break;
            }
       
        
        
    }

    return 0;
}