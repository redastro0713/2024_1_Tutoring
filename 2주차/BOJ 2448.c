#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char arr[3072][6143] = { 0 };
int n = 1;

char star(int y, int x, int n)
{
    if (n == 3)
    {
        arr[y][x] = '*'; //기본 삼각형 모양 만들기
        arr[y + 1][x - 1] = '*';
        arr[y + 1][x + 1] = '*';
        arr[y  + 2][x - 2] = '*';
        arr[y + 2][x - 1] = '*';
        arr[y + 2][x] = '*';
        arr[y + 2][x + 1] = '*';
        arr[y + 2][x + 2] = '*';

    }
    else
    {
        star(y ,x ,n / 2); //절반으로 나누고
        star(y + n / 2 ,x - n / 2 ,n / 2); //그 왼쪽 모서리 부분과
        star(y + n / 2 ,x + n / 2 ,n / 2); //오른쪽 모서리 부분에서 다시 재귀

    }

    return 0;
}

int main()
{
    while (!((n % 6 == 0 && n % 4 == 0 && n % 9 != 0) || (n % 3 == 0)))
    {
        printf("몇 줄 : ");
        scanf("%d", &n);
    }


    star(0 ,n - 1 ,n);

    for (int i = 0; i < n; i++) 
    {  
        for (int j = 0; j < n * 2; j++) 
        {   
            if (arr[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");   
    }


    return 0;
}

