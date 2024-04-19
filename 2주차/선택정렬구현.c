#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리

int main()
{
	int arr[20];
	int temp; //값 변경을 위한 임시의 값 변수

	for (int i = 0; i < 20; i++) arr[i] = rand() % 11; //크기가 20인 arr에 요소들에 랜덤숫자 대입

	for (int i = 0; i < 20; i++) printf("%d ", arr[i]); //랜덤으로 쓰여진 수열을 출력

	temp = arr[0];

	for (int i = 0; i < 19; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (arr[i] > arr[j]) //arr[i]가 arr[j]보다 크면 arr[i]는 최솟값이 아니므로 arr[j]로 변경해준다.  
                                 /* (i = 0일 때, j가 1~19까지 전부 검토하고
                                     i = 1일 때 다시 j가 1~19까지 검토함*/   
            {
				temp = arr[i]; 
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\n");
	for (int i = 0; i < 20; i++) printf("%d ", arr[i]);
}
