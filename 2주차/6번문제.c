#include <stdio.h>

int main() {
    int num = 42; //변수 선언
    int* ptr = &num; //포인터에 num의 주소 대입
    int** double_ptr = &ptr; //더블포인터에 포인터의 주소를 대입

    printf("Address of num = %p\n", &num); //num의 주소 출력
    printf("Address of ptr = %p\n", ptr); //ptr이 가르키는 num의 주소 출력
	  printf("Address of ptr = %p\n", &ptr);
    printf("Address of ptr(*double_ptr) = %p\n", *double_ptr); //더블포인터의 실제값 출력
    printf("Address of double_ptr = %p\n", double_ptr); //더블포인터가 가리키는 ptr의 주소 출력

    printf("Value of num = %d\n", num); //num 값 출력
    printf("Value of ptr = %d\n", *ptr); //ptr이 가리키는 주소에 해당하는 값 출력
    printf("Value of double_ptr = %d\n", **double_ptr); //더블포인터가 가리키는 ptr이 가리키는 주소에 해당하는 값 출력
    
}

/* 
	*ptr = num(값)을 나타낸다
	*double_ptr = ptr(값 = 주소)을 나타낸다
	**double_ptr = *ptr =  num(값)을 나타낸다

*/