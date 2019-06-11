//longest prefix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int len, wordLen, i,j;
	scanf("%d",&len);
	char string[len][100000],x;
	for(i=0;i<len;i++)	scanf("%s",string[i]);
	wordLen= strlen(string[0]);
	for(i=0;i<wordLen;i++){
		x= string[0][i];
		for(j=1;j<len;j++){
			if(x!=string[j][i])	return 0;
		}
		printf("%c",x);
	}
	return 0;
}
