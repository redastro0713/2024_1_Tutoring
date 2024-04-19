#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findMinMax(int arr[100], int s, int* mi, int* ma) //포인터를 선언해서 매개변수의 주소에 해당하는 값을 직접적으로 변경
{
    *mi = arr[0]; //mi가 가르키는 주소에 저장된 값을 arr[0]으로 초기화
    *ma = arr[0]; //ma가 가르키는 주소에 저장된 값을 arr[0]으로 초기화

    for (int i = 0; i < s; i++)
    {
        if (*mi > arr[i]) *mi = arr[i]; //크다면 mi값을 교체
        if (*ma < arr[i]) *ma = arr[i]; //작다면 ma값을 교체
    }

}

int main() {
    int size, min, max;

    printf("배열 크기 입력: ");
    scanf("%d", &size);

    int arr[100];
    printf("정수 배열 입력: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, size, &min, &max); //
		
    printf("최소값: %d\n", min);
    printf("최대값: %d\n", max);

    return 0;
}