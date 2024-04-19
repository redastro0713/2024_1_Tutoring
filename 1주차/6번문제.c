#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int a = 10;
    int b = 20;
    int temp;

    int* ptr1;
    int* ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("Value of a = %d\nValue of b = %d\n", *ptr1, *ptr2);

   temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Value of a = %d\nValue of b = %d", *ptr1, *ptr2);
}