#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols;

    printf("배열의 행(row)과 열(col)을 입력하세요 (1부터 100까지의 정수): ");
    scanf("%d %d", &rows, &cols);

    printf("배열의 값을 입력하세요:\n");

    for (int i = 0; i < rows; i++) //cmd창은 열로 글자를 먼저 받고 엔터를 누르면 행이므로 열부터 배열을 채운다
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n입력한 배열:\n"); 
    
	for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]); //마찬가지로 열부터 표시
        }
    }

    return 0;
}