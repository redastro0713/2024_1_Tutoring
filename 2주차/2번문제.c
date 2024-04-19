#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int num)
{   
    if (num == 0)  return 0; //num이 0이면 리턴 0을 보낸다
    else if (num == 1) return 1; //num이 1이면 리턴 1을 보낸다
    else return fibonacci(num - 1) + fibonacci(num - 2); //0or1이 아니면 피보나치 수열의 계산을 한다
}

int main() {
    int n;
    printf("피보나치 수열 길이 입력: ");
    scanf("%d", &n);

    int fib[100];
    
    for (int i = 0; i < n + 1; i++)
    {
        fib[i] = fibonacci(i); //fib문자열에 피보나치 함수값을 대입
    }

    printf("피보나치 수열: ");
    for (int i = 1; i < n + 1; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}