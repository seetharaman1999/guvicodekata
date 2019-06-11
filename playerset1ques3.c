#include<stdio.h>
int main()
{
  int number,rev=0,dig;
  scanf("%d",&number);
  while(number)
  {
    dig=number%10;
    rev=rev*10+dig;
    number/=10;
   }
   printf("%d",rev);
   return 0;
  }
