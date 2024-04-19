#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max_value(int arr[4][3], int rows, int cols) 
{
    int max = arr[0][0]; //처음 최댓값을 2차원 배열의 원점으로 초기화

    for (int i = 0; i < rows; i++) //행 수만큼 반복
    {
        for (int j = 0; j < cols; j++) //열 수만큼 반복
        {
            if (max < arr[i][j]) max = arr[i][j]; //max보다 값이 크다면 변경
        }
    }

    return max;
}

int main() 
{
    int arr1[4][3] = 
    { 
        {11, 82, 37}, 
        {46, 55, 46}, 
        {37, 18, 9} ,
        {4, 64, 58}
    };
        
    int result1 = find_max_value(arr1,4,3); //2차원배열, 행과 열을 매개변수 받는다.

    printf("arr1의 가장 큰 값: %d\n", result1);

    return 0;
}