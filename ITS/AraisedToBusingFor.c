#include<stdio.h>
#include<math.h>
int main(){
	int a,b,i,ans=1;
	printf("\nEnter the value of a: ");scanf("%d",&a);
 printf("\nEnter the value of b: ");scanf("%d",&b);
 /*
	for(i=0;i<b;i++)
  	ans=ans*a;
	*/
	ans=pow(a,b);
  printf("\n%d raised to %d is %d",a,b,ans);
  return 0;
}
