#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stringCompare(const char* str1, const char* str2)
{
    char s1,s2; //변수를 상수처럼 취급받았으니까 대소문자 통일을 위한 변수

   for(int i = 0; i<100; i++) 
   {
        s1 = str1[i]; 
        s2 = str2[i];

        if (s1 >= 'a' && s1 <='z') s1 -= 32; //s1이 소문자면 대문자로
        if (s2 >= 'a' && s2 <='z') s2 -= 32; //s2이 소문자면 대문자로

        if (s1 < s2) //두 문자열의 아스키코드가 s1이 더 작으면 더 일찍오는 알파벳이므로 바로 리턴값(-1)을 받는다
            return -1;
        else if (s1 > s2) //두 문자열의 아스키코드가 s2이 더 작으면 더 일찍오는 알파벳이므로 바로 리턴값(1)을 받는다
            return 1;
   }
   return 0; //for문에서 부등호 관계가 계속 성립하지 않는다는 것은 두 문자열이 같을 경우이므로 리턴값 0을 받는다
}

int main() 
{
    char string1[100] = {0};
    char string2[100] = {0};

    printf("첫 번째 문자열을 입력하시오 : ");
    scanf("%s", string1);
    printf("두 번째 문자열을 입력하시오 : ");
    scanf("%s", string2);

    if (stringCompare(string1, string2) < 0) {
        printf("첫 번째 문자열이 먼저 온다.\n");
    }
    else if (stringCompare(string1, string2) > 0) {
        printf("두 번째 문자열이 먼저 온다.\n");
    }
    else{
        printf("같은 문자열이다.\n");
    }
}
