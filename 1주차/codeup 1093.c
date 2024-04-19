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
		arr[num - 1]++; 
		/*출석번호에 해당하는 배열의 칸
		(베열은 0부터 시작하므로 -1을 해준다)에 + 1함 */
	} 

	for (int i = 0; i < 23; i++)
	{
		printf("%d - %d \n", i+1 ,arr[i]); //전부 출력
	}
}