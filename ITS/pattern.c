#include<stdio.h>
int main()
{
	/*
	HW:
	*****
	 ****
	  ***
	   **
	    *
	
	*/
	int i,j,k,s=1;
	for (i=5; i>=1; i--) {
		for (k=s; k>=0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		s=s+1;
		printf("\n");
	}

	//int i,j;
	/*-----------------------------For Alphabets---------------------------------
	for(i='A';i<=('A'+5);i++)
	{
		 for(j='A';j<=i;j++)
		 {
		 	printf("%c",j);
		 }
		 printf("\n");
	}*/
	/*----------Simple Pattern
	for(i=1;i<=5;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	}
	*/
	
/*---------------Number Patter--------
	for(i=1;i<=5;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf("%d",j);
		 }
		 printf("\n");
	}*/
	/*---------Reverse Order----------
	for(i=5;i>=0;i--)
	{
		 printf(" ");
		 for(j=0;j<i;j++)
		 {
		 	printf(" *");
		 }
		 printf("\n ");
	}
	*/
	getch();
}
