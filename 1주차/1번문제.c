#include <stdio.h>

int main() {
    int arr[10] = { 10,23,15,26,17,37,45,44,3,11 }; //배열 선언
    int max = 0; //최댓값 변수
    int min = 0; //최솟값 변수
    double average = 0; //평균값 변수
    double hap = 0; //평균을 구하기 위한 배열의 합

    max = arr[0]; //최댓값을 배열의 첫 번째로 바꿈
    min = arr[0]; //최솟값을 배열의 첫 번째로 바꿈
    for (int i = 0; i < 10; i++)
    {
     if (max < arr[i]) max = arr[i]; //배열의 iㅁ번째 수가 max보다 크면 max를 그 값으로 변경
     if (min > arr[i]) min = arr[i]; //배열의 i번째 수가 min보다 작으면 min를 그 값으로 변경
     hap += arr[i]; //배열 모든 수 합
    }
    average = hap / 10; //평균 구하기

    printf("가장 큰 수 : %d\n", max);
    printf("가장 작은 수 : %d\n", min);
    printf("배열의 평균값 : %.1f\n", average);
}