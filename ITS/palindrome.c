#include<stdio.h>
int main()
{
	int a,s,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	b=a;
 s=0;
	while(a>0){
		s=s*10;
		s=s+(a%10);
		a=a/10;
	}
	if(b==s)
	printf("\n %d is a palindrome",b);
	else
	printf("\n %d is not a palindrome",b);
	getch();
}
