#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int f, int s)
{   
        if (f % s == 0) return s; //만약 f가 s로 나눠지면 s가 gcd이므로 s를 리턴
        else return gcd(s, f % s); //안 나눠지면 gcd를 구하는 방법대로 s와 f 모듈러 s로 다시 검토
}


int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n%d", gcd(a, b), (a * b) / gcd(a, b));



}