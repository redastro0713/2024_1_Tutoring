#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

int sort[20];

void merge(int list[], int left, int mid, int right)
{
  int i, j, k, l;
  i = left;
  j = mid+1;
  k = left;
  
  while(i<=mid && j<=right)
  {
    if(list[i]<=list[j])
      sort[k++] = list[i++];
    else
      sort[k++] = list[j++];
  }

  
  if(i>mid)
  {
    for(l=j; l<=right; l++)
      sort[k++] = list[l];
  }
  
  else
  {
    for(l=i; l<=mid; l++)
      sort[k++] = list[l];
  }

  for(l=left; l<=right; l++)
  {
    list[l] = sort[l];
  }
}


void merge_sort(int list[], int left, int right)
{
  int mid;

  if(left<right)
  {
    mid = (left+right)/2;
    merge_sort(list, left, mid); 
    merge_sort(list, mid+1, right); 
    merge(list, left, mid, right); 
  }
}

void main()
{
    srand(time(0));

    int list[20];

    for (int i = 0; i < 20; i++)
    {
        list[i] = (rand() % 201) - 100; 
    }

    for(int i=0; i<20; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
    merge_sort(list, 0, 19);

  
    for(int i=0; i<20; i++)
    {
        printf("%d ", list[i]);
    }

    
}
 