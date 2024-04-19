#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int a = 10;
    int* ptr;

    ptr = &a;

    printf("Adress of a = %p\nValue of a = %d", ptr, *ptr);
}