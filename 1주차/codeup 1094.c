#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int arr[23] = { 0 }; //학생 수 배열
	int n = 0; //부른 횟수 변수
	int num = 0; //입력된 출석번호 변수

	printf("출석 번호를 부른 횟수 ==> ");
	scanf("%d", &n); //부른 횟수를 입력 받음

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num); //출석번호를 입력받음
		arr[n - 1 - i] = num;
	} /*입력받은 출석번호를 배열의 맨 마지막
	  (마지막은 n번째이고 배열은 0부터 시작이므로 - 1 
	  그리고 반복문의 횟수인 i만큼 빼서 그 전 배열 칸에 저장)
	  부터 저장 */

		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]); //전부 출력
		}
}