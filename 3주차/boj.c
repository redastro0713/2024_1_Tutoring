#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		return g(b, a % b);
	}
}

int main()
{
	
	int a1, a2, b1, b2;
	int r1, r2;

	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);

	r1 = (a1 * b2) + (a2 * b1);
	r2 = b1 * b2;

	printf("%d %d", (r1 / g(r1,r2)), (r2 / g(r1, r2)));




	return 0;
}
