    #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addStrings(char s1[100], char s2[100], char s3[200])
{
    int count = 0; //글자 수를 세기 위한 변수

    while (s1[count] != 0) count++; //문자열의 끝을 알리는 NULL값이 나올 때 까지 count를 ++
    
    for (int i = 0; i < count; i++)  s3[i] = s1[i]; //0~(count - 1)까지 s3문자열에 s1을 대입
    
    s3[count] = ' '; //(count-1)까지 s1의 값이 다 들어갔으니 공백 표기

    for (int i = 1; i <= 100; i++) s3[count + i] = s2[i-1]; //count가 공백이므로 count 다음부터 s2대입
    
    return 0;
}

int main()
{
    char str1[100], str2[100], result[200];
    printf("첫 번째 문자열 입력: ");
    scanf("%s", str1);

    printf("두 번째 문자열 입력: ");
    scanf("%s", str2);

    addStrings(str1, str2, result);

    printf("결과 문자열: %s\n", result);

    return 0;
}