#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
if(num<=-1)
  printf("Invalid");
else if(num%2!=0)
  printf("Odd");
else if(num%2==0)
  
  printf("Even");
return 0;
}
