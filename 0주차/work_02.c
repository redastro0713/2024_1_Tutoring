#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char ans1[16]; //문자열 5줄을 받으니까 5개의 문자열 배열 생성
char ans2[16];
char ans3[16];
char ans4[16];
char ans5[16];

int count1 = 0; //5개의 문자열의 길이 수를 구하기 위한 변수
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;

int main()
{

    scanf("%s", &ans1); //문자열 입력받기
    scanf("%s", &ans2);
    scanf("%s", &ans3);
    scanf("%s", &ans4);
    scanf("%s", &ans5);


    while (ans1[count1] != '\0') count1++; //글자 수 세기
    while (ans2[count2] != '\0') count2++;
    while (ans3[count3] != '\0') count3++;
    while (ans4[count4] != '\0') count4++;
    while (ans5[count5] != '\0') count5++;


    for (int i = 0; i < 16; i++)
    {
        if (i < count1) printf("%c", ans1[i]); //반복문의 횟수가 글자 수보다 작을 때만 글씨 출력
        if (i < count2) printf("%c", ans2[i]);
        if (i < count3) printf("%c", ans3[i]);
        if (i < count4) printf("%c", ans4[i]);
        if (i < count5) printf("%c", ans5[i]);
    }

    return 0;

}