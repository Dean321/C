#include<stdio.h>
int main()
{
char ch,str[30];
	int i=0;
	printf("\n Enter your string with whitespaces:");
	while(ch!='\n'){
		ch=getchar();
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	printf("\nString is %s",str);
	return 0;	
}

