#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//string 함수 선언, 정의는 main 아래에 정의 후 구현


int my_strlen(char* arr1, char* arr2)
{
	int cnt1 = 0, cnt2 = 0;
	while (arr1[cnt1] != 0)
	{
		cnt1++;
	}
	while (arr2[cnt2] != 0)
	{
		cnt2++;
	}

	printf("The length of arr1 is %d\n", cnt1);
	printf("The length of arr2 is %d", cnt2);
}

int my_strcmp(char* arr1, char* arr2)
{
	for (int i = 0; i < 50; i++)
	{
		if (arr1[i] < arr2[i])
		{
			return -1;
		}
		else if (arr1[i] > arr2[i])
		{
			return 1;
		}

	}
	return 0;
}

int my_strcpy(char* arr1, char* arr2)
{
	int cnt1 = 0, cnt2 = 0;
	int j = 0;
	while (arr2[cnt2] != 0)
	{
		cnt2++;
	}
	while (arr1[cnt1] != 0)
	{
		cnt1++;
	}

	for (int i = 0; i < cnt2; i++)
	{
		arr1[i] = arr2[i];
	}
	if (cnt1 < cnt2)
	{
		printf("오류\n");
		return 0;
	}
	printf("%s", arr1);
	return 0;
}

void my_strcat(char* arr1, char* arr2)
{
	char arr[100];

	int cnt = 0;

	while (arr1[cnt] != 0)
	{
		cnt++;
	}

	for (int i = 0; i < cnt; i++)
	{
		arr[i] = arr1[i];
	}
	for (int i = 0; i < 50; i++)
	{
		arr[cnt + i] = arr2[i];
	}
	printf("%s", arr);
}


int main() {
	char arr1[50], arr2[50];
	char arr3[50], arr4[50];

	scanf("%s", arr1);
	scanf("%s", arr2);

	my_strlen(arr1, arr2);
	printf("\n");
	printf("%d", my_strcmp(arr1, arr2));
	printf("\n");
	my_strcat(arr1, arr2);
	printf("\n");
	
	for (int i = 0; i < 50; i++)
	{
		arr3[i] = arr1[i];
		arr4[i] = arr2[i];
	}

	my_strcpy(arr1, arr2);
	printf("\n");
	

	return 0;
}

