#include<stdio.h>
#include<string.h>
struct L{
	char name[30];
}b[100];

int main(){
char nm[30];
int i;
/*
for(i=0;i<5;i++){
	printf("\n Enter the name: ");scanf("%[^\n]*s%",nm);
 strcpy(b[i].name,nm);
}
for(i=0;i<5;i++)
   printf("\nName[%d]: %s",i,b[i].name);
*/
	printf("\n Enter the name: ");scanf("%[^\n]*s%",nm);
 strcpy(b[0].name,nm);
	printf("\n Enter the name: ");scanf("%[^\n]*s%",nm);
 strcpy(b[1].name,nm);
	
	printf("\nName[%d]: %s",i,b[0].name);
	printf("\nName[%d]: %s",i,b[1].name);
	return 0;
}
