#include<stdio.h>

struct book{
	char name[30];
	int cost;
}b[100];
int main(){
	int n,i;
	printf("\nEnter the no.of books: ");scanf("%d",&n);
	for(i=0;i<n;i++){
		   printf("Enter the name of book %d: ",i+1);fgets(b[i].name,30,stdin);printf("\n");
		   printf("\nEnter the cost for %s: ",b[i].name);scanf("%d",b[i].cost);
	}
}
