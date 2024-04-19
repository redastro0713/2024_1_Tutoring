#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 행렬의 크기를 상수로 정의
#define ROWS 3
#define COLS 3

// 행렬곱을 계산하는 함수
void matrixMultiplication(int (*mat1)[COLS], int (*mat2)[COLS], int (*result)[COLS]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }        
    }
}

// 행렬을 출력하는 함수
void printMatrix(int (*mat)[COLS]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], result[ROWS][COLS];

	srand(time(0));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            mat1[i][j] = (rand() % 21) - 10;
            mat2[i][j] = (rand() % 21) - 10;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    
    matrixMultiplication(mat1, mat2, result);

    printf("\n두 행렬의 곱은 다음과 같습니다:\n");
    printMatrix(result);

    return 0;
}