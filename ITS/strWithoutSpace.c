#include<stdio.h>
char* getname(){
	char str[30],ch,*ptr;
	int i=0;
	printf("\nEnter the name:");
	while(ch!='\n'){
		ch=getchar();
		str[i]=ch;
		i++;
		}
		str[i]='\0';
		printf("\n Inside Function str = %s",str);
		return str;
	
}
int main(){
	/*
	   char *ptr;
	   ptr=getname();
	   printf("\n%s ",ptr);
	*/
	
	char str[30];
	//scanf("%[^\n]s%",str);
	fgets(str,30,stdin);
	printf("\n %s",str);
}
