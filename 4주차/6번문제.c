#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>


void mat(int** arr[], int x, int y, int a, int b)
{
    
}

int main()
{   
    int n;

    scanf("%d", &n);

    int m = pow(2,n);

    int** arr = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) 
    {
        arr[i] = (int*)malloc(sizeof(int) * m);
    }
    
    mat(arr,);
    
    for (int i = 0; i < m; i++)
    {
       
        for (int j = 0; j < m; j++)
        {
            printf("%2d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
