#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char string[100] = {0,}; //최대 100문자를 받을 수 있는 배열
	
	printf("영문 문자열을 입력하시오 : ");
	scanf("%[^\n]s",&string); //받은 글자수를 저장(띄어쓰기까지 저장하려면 "%s"가 아닌 "%[^\n]s")

	printf("입력된 문자열 : %s\n", string); 
	
    for (int i = 0; i < 100; i++) //소문자를 모두 대문자로 바꾸기
    {
        if (string[i] >= 'a' && string[i] <= 'z') //배열의 i번째의 글자 아스키코드를 확인하여 대문자로 변경 
            string[i] -= 32;
        else if (string[i] >= 'A' && string[i] <= 'Z') //배열의 i번째의 글자 아스키코드를 확인하여 소문자로 변경 
            string[i] += 32;
    }

	printf("수정된 문자열 : %s\n", string);
}