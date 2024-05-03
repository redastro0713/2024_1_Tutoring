#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   char msg[50];
   char ans;

   int count = 0;
   int aNum = 0;
   int imsg[50] = {0,};
   int cnt[50] = {0,};
   int i1, i2, i3, i4;
   int max, maxNum = 0;

   scanf("%s", msg);

   while (msg[count] != 0)
   {
      count++;
   }

   for (int i = 0; i < count; i++) 
   {
      if (msg[i] >= 'a' && msg[i] <= 'z') msg[i] -= 32;
   }
   
   for (int i = 0; i < count; i++) imsg[i] = (int)msg[i];

   for ( i1 = 0; i1 < count; i1++) {
      for  (i2 = 0; i2 < i1; i2++) {
         if (imsg[i1] == imsg[i2]) {
            cnt[i2]++;
            break;
         }
      }

      if (i2 == i1) cnt[i2]++;
   }
   

   max = cnt[0];
   for (i3 = 0; i3 < count; i3++) {

      if (max < cnt[i3])
      {
         max = cnt[i3];
         maxNum = i3;
      }
      
   }

   for (i4 = 0; i4 < count; i4++)
   {
      if (max == cnt[i4])
      {
         aNum++;
      }
   }

   if (aNum == 1)
   {
      printf("%c", (char)imsg[maxNum]);
   }
   else
   {
      printf("?");
   }
   
   
   return 0;
}