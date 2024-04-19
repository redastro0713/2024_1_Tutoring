#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main() {
    int num1, num2;
    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("Swap 전: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Swap 후: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

