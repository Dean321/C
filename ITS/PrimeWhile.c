#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
	printf("Prime Number");
	else
	printf("Not a Prime Number");
	getch();
}
