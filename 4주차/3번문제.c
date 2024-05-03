#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
    srand(time(0));

    int m, n;

    scanf("%d %d", &m, &n);

    int** arr1 = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) 
    {
        arr1[i] = (int*)malloc(sizeof(int) * n);
    }

    int** arr2 = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) 
    {
        arr2[i] = (int*)malloc(sizeof(int) * m);
    } 

    int** result = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) 
    {
        result[i] = (int*)malloc(sizeof(int) * m);
    }

    int** result1 = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) 
    {
        result1[i] = (int*)malloc(sizeof(int) * n);
    }
    

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = (rand() % 21) - 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    } 
    
    printf("A : {\n");
    for (int i = 0; i < m; i++)
    {
        printf("{");
        for (int j = 0; j < n; j++)
        {
            printf("%3d, ", arr1[i][j]);
        }
        printf("},");
        printf("\n");
    }

    printf("}\n");

    printf("\nAT: {\n");
    for (int i = 0; i < n; i++)
    {   printf("{");
        for (int j = 0; j < m; j++)
        {
            printf("%3d, ", arr2[i][j]);
        }
        printf("},");
        printf("\n");
    } 
    printf("}\n");

    printf("\nA*AT: {\n");
    
    for (int i = 0; i< m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k< n; k++)
            {
                result[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("{");
        for (int j = 0; j < m; j++)
        {
            printf("%3d, ", result[i][j]);
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");
    

    printf("\nAT*A: {\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                result1[i][j] += arr2[i][k]*arr1[k][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("{");
        for (int j = 0; j < n; j++)
        {
            printf("%3d, ", result1[i][j]);
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");



    for (int i = 0; i < m; i++)
    {
        free(arr1[i]);
    }
    free(arr1);

    for (int i = 0; i < n; i++)
    {
        free(arr2[i]);
    }
    free(arr2); 
    for (int i = 0; i < m; i++)
    {
        free(result[i]);
    }
    free(result); 
    for (int i = 0; i < n; i++)
    {
        free(result1[i]);
    }
    free(result1);


    return 0;
}