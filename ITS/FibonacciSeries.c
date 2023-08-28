#include<stdio.h>
int main()
{
	int i,t,s,f;
	/*
	f=0;
	s=1;
	for(i=0;i<5;i++)
	{
		printf(" %d ",f);
		t=f+s;
		f=s;
		s=t;
	}
	*/
	printf("Enter the first two nos.");
	scanf("%d%d",&f,&s);
	//----------Using While Loop------------
	while(i<5)
	{
		 printf(" %d ",f);
		 t=f+s;
		 f=s;
		 s=t;
		 i++;
	}
	/*------------Using for Loop------------
	for(i=0;i<5;i++)
	{
		printf(" %d ",f);
		t=f+s;
		f=s;
		s=t;
	}
	*/
	getch();
}
