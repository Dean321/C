#include<stdio.h>
int Ans(int a,int b){
	if(b==0)
	  return 1;
	else if(b==1)
	    return a;
	else
	  return a*Ans(a,b-1);
	}
int main(){
	int i,res,a,b;
	printf("\nEnter the value of a: ");scanf("%d",&a);
 printf("\nEnter the value of b: ");scanf("%d",&b);
res=Ans(a,b);
  printf("\n%d raised to %d is %d",a,b,res);
  return 0;
}
