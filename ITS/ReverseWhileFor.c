#include<stdio.h>
int main()
{
	int a,s,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	b=a;
	//----------------Using while loop------------
	s=0;
	while(a>0){
		s=s*10;
		s=s+(a%10);
		a=a/10;
	}
	/*-----------------Using for loop--------------
	for(s=0;a>0;a=a/10)
	{
		s=s*10;
		s=s+(a%10);
 }
	*/
	printf("\n reverse of %d is %d",b,s);
	getch();
}
