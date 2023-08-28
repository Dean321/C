#include<stdio.h>
#include<string.h>
//public str[30];
struct Book{
int n;
}b[100];

int main(){
	int i;
	for(i=0;i<5;i++)
	scanf("%d",&b[i].n);
	for(i=0;i<5;i++)
	printf("\n%d",b[i].n);	
	return 0;
}
