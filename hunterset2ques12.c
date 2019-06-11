#include<stdio.h>
int main()
{
  int n,i,j,temp,pos;
  scanf("%d %d",&n,&pos);
  int arr[n];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
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
   printf("%d",arr[pos-1]);

}
