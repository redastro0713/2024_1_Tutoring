#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int a = 10;
    int* ptr;

    ptr = &a;

    printf("Value of a = %d", 2*(*ptr));
}