#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int arr[23] = { 0 }; //학생 수 배열
	int n = 0; //부른 횟수 변수
	int num = 0; //입력된 출석번호 변수
	int helper = 0;

	printf("출석 번호를 부른 횟수 ==> ");
	scanf("%d", &n); //부른 횟수를 입력 받음

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //출석번호를 입력받음
		arr[i] = num;
		
	} 

	for (int i = 0; i < n; i++) //버블 정렬을 통해 arr[0]이 가장 작은 수
	{
		for (int j = 0; j < (n - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				helper = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = helper;
			}
		}
	}
	
		printf("%d", arr[0]); //arr[0] 출력
	
}