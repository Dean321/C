#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two number a and b: ");
	scanf("%d%d",&a,&b);
	printf("\n The value of a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n The changed value of a=%d and b=%d",a,b);
	getch();
}
