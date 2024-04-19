#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_values(int** d_p1, int** d_p2) //포인터의 주소를 더블포인터로 받는다
{
    int temp = **d_p1; //temp변수를 d_p1 실제값으로 변경
    **d_p1 = **d_p2; //d_p1 실제값에 d_p2 실제값 대입
    **d_p2 = temp; //d_p2 실제값에 temp 대입
}


int main() {
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("교환 이전: num1 = %d, num2 = %d\n", num1, num2);


    swap_values(&ptr1, &ptr2); //두 포인터의 주소를 매개변수로 올린다

    printf("교환 이후: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
