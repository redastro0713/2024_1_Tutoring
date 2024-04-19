#include <stdio.h>
#include <time.h>
// 행렬의 크기를 상수로 정의
#define ROWS 3
#define COLS 3
// 행렬의 합을 계산하는 함수
void matrixSum(int(*mat1)[COLS], int(*mat2)[COLS], int(*result)[COLS]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
// 행렬을 출력하는 함수
void printMatrix(int(*mat)[COLS]) 
{
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
            mat1[i][j] = (rand() % 201) - 100;  
            mat2[i][j] = (rand() % 201) - 100;
        }
    }

    matrixSum(mat1, mat2, result);

    printf("두 행렬의 합은 다음과 같습니다:\n");
    printMatrix(result);

    return 0;
}