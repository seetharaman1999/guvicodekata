#include<stdio.h>
int main()
{
  int n,i,arr1[1000]={0},flag=0;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    arr1[arr[i]]++;
   }
   for(i=0;i<1000;i++)
   {
      if(arr1[i]==1)
      {
        flag=1;
        printf("%d ",i);
       }
   }
   return 0;
  }
       
