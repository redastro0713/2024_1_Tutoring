#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(a)
{
    int cnt = 0; //약수 개수를 세는 변수 선언

    for(int i =1; i<1000; i++)
    {
        if (a%i == 0) //만약 i가 a의 약수이면 cnt증가
        {
            cnt++;
        }
    }

    if (cnt==2) //소수는 약수를 두 개 가지므로 이걸 판별하고 리턴
        return 1;
    else
        return 0;

}

int main() {
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d는 소수입니다.\n", num);
    else
        printf("%d는 소수가 아닙니다.\n", num);

    return 0;
}