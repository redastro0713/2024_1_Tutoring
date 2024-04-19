#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sortArray(int arr1[],int size1)
{
    int change = 0; 

    for (int i = 0; i < size1; i++) //버블 정렬
    {
        for (int j = 0; j < (size1 - 1); j++)
        {
            if (arr1[j] > arr1[j + 1]) //만약 j번째 배열이 j+1번째 배열보다 크면 둘을 바꾸기
            {
                change = arr1[j]; 
                arr1[j] = arr1[j + 1]; 
                arr1[j + 1] = change; 
            }
        }
    }
       
    return 0;

}


int main() {
    int size;
    printf("배열 크기 입력: ");
    scanf("%d", &size);

    int arr[100];
    printf("정수 배열 입력: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr,size);

    printf("정렬된 배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}