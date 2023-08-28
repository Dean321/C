#include<stdio.h>
int main(){
	int m;
	char g;
	printf("\nEnter marks:");scanf("%d",&m);
	printf("\nEnter Grade:");scanf(" %c",&g);
	if(m>=70 && g=='A')
	  printf("\nPassed");
 else
   printf("\nFailed");
}

