#include<stdio.h>
int main()
{
  int n,i,j,cnt=0,temp;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]==0)
    cnt++;
   }
    if(cnt==n)
    {
      printf("0");
      return 0;
      }
  for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
  {
    if(arr[j]>arr[i])
    {
      temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
     }
    }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
   }
    
   
