#include<stdio.h>
int main()
{
	int a,s;
	printf("Enter a number: ");
	scanf("%d",&a);
	//printf("\n Value of a outside is %d",a);
	for(s=0;a>0;a=a/10)
	{
		//printf("\n Value of a inside is %d",a);
		s=s+(a%10);
		//printf("\n Value of a=%d and s=%d after stmt ",a,s);
	}
	//printf("\n value of a is %d",a);
	printf("\n sum is %d",s);
	getch();
}
