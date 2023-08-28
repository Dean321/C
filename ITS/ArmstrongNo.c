#include<stdio.h>
int main(){
	int i,n,sum=0,r,o;
	printf("\nEnter a 3 digit number: ");scanf("%d",&n);
	o=n;
	for(i=0;n>0;n=n/10){
		  r=n%10;
		  sum=sum+(r*r*r);
	}
	if(sum==o)
	  printf("\n It is an Armstrong number.");
	else
	    printf("\n It is not an Armstrong number.");
}
