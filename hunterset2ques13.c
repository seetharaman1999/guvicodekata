#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,len1,flag=0;
    scanf("%s",str);
    len=strlen(str);
    len1=len;
    for(i=0;i<len/2;i++)
    {
      if(str[i]!=str[len-1])
      flag=1;
    }
    if(flag==0)
    printf("YES");
    else
    printf("NO");
 

}
