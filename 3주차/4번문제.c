#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 행렬의 크기를 상수로 정의
#define ROWS 3
#define COLS 3

// 행렬식을 계산하는 함수
int determinant(int (*mat1)[COLS]) {
	
	int a1 = 1, a2 = 1, a3 = 1, b1 = 1, b2 = 1, b3 = 1;
	int a[6] = {0,1,2,0,1};
	int b[6] = {0, 2, 1, 0 ,2};

	for (int i = 0; i < 3; i++)
	{
		a1 *= mat1[i][a[i]];
		a2 *= mat1[i][a[i+1]]; 
		a3 *= mat1[i][a[i+2]];
		b1 *= mat1[i][b[i]]; 
		b2 *= mat1[i][b[i+1]]; 
		b3 *= mat1[i][b[i+2]];
	}

	return ((a1 + a2 + a3) - (b1 + b2 + b3));
}
int main() {
    int mat1[ROWS][COLS];

	srand(time(0));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//scanf("%d", &mat1[i][j]);
			mat1[i][j] = (rand() % 201) - 100;
		}
	}

	

    printf("행렬식은 다음과 같습니다:\n");
    printf("행렬식: %d", determinant(mat1));
    return 0;
}