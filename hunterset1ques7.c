//correct
#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
      if(i%2==0)
      {
        if(arr[i]%2!=0)
        printf("%d ",arr[i]);
      }
      else
      {
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
      }
   }
}
