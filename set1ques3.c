#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(isalpha(ch))
  {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("Vowel");
    else
    printf("Consonant");
  }
  else
  printf("Invalid"):
  return 0;
 }
  
