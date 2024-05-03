#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
   int n, tem;
   int k, h, t, o;

   char n_1000[1];
   char n_100[5];
   char n_10[5];
   char n_1[5];

   printf("변환 수 입력 : ");
   scanf("%d", &n);

   tem = n;
   k = n / 1000;
   n -= 1000 * k;
   h = n / 100;
   n -= 100 * h;
   t = n / 10;
   n -= 10 * t;
   o = n;
   n = tem;

   printf("%d = %d + %d + %d + %d = ", n, 1000 * k, 100 * h, 10 * t, o);

   if (k == 1)
      strcpy(n_1000, "K");
   else
      strcpy(n_1000, "");

   if (h == 1)
      strcpy(n_100, "C");
   else if (h == 2)
      strcpy(n_100, "CC");
   else if (h == 3)
      strcpy(n_100, "CCC");
   else if (h == 4)
      strcpy(n_100, "CD");
   else if (h == 5)
      strcpy(n_100, "D");
   else if (h == 6)
      strcpy(n_100, "DC");
   else if (h == 7)
      strcpy(n_100, "DCC");
   else if (h == 8)
      strcpy(n_100, "DCCC");
   else if (h == 9)
      strcpy(n_100, "CM");
   else
      strcpy(n_100, "");

   if (t == 1)
      strcpy(n_10, "X");
   else if (t == 2)
      strcpy(n_10, "XX");
   else if (t == 3)
      strcpy(n_10, "XXX");
   else if (t == 4)
      strcpy(n_10, "XL");
   else if (t == 5)
      strcpy(n_10, "L");
   else if (t == 6)
      strcpy(n_10, "LX");
   else if (t == 7)
      strcpy(n_10, "LXX");
   else if (t == 8)
      strcpy(n_10, "LXXX");
   else if (t == 9)
      strcpy(n_10, "XC");
   else
      strcpy(n_10, "");

   if (o == 1)
      strcpy(n_1, "I");
   else if (o == 2)
      strcpy(n_1, "II");
   else if (o == 3)
      strcpy(n_1, "III");
   else if (o == 4)
      strcpy(n_1, "IV");
   else if (o == 5)
      strcpy(n_1, "V");
   else if (o == 6)
      strcpy(n_1, "VI");
   else if (o == 7)
      strcpy(n_1, "VII");
   else if (o == 8)
      strcpy(n_1, "VIII");
   else if (o == 9)
      strcpy(n_1, "IX");
   else if (o == 0 )
      strcpy(n_1, "");

   printf("%s%s%s%s", n_1000, n_100, n_10, n_1);
   
   return 0;
}




/*
I II III IV V VI VII VIII IX X
XI XII XIII XIV XV XVI XVII XVIII XIX XX



I V  X  L  C   D    M
1 5 10 50 100 500 1000

I,X,C 앞자리 최대 두 단위 ㅇㅇ / V,L은 앞자리 ㄴㄴ
IX


k == 1 > M
k == 0 > pass

h == 1 > C
h == 2 > CC
    3 > CCC
    4 > CD
    5 > D
    6 > DC
    7 > DCC
    8 > DCCC
    9 > CM
    0 > pass

t == 1 > X
t == 2 > XX
    3 > XXX
    4 > XL
    5 > L
    6 > LX
    7 > LXX
    8 > LXXX
    9 > XC
    0 > pass

o == 1 > I
o == 2 > II
    3 > III
    4> IV
    5 > V
    6 > VI
    7 > VII
    8 > VIII
    9 > IX
    0 > pass
*/