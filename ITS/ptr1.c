#include<stdio.h>
int main(){
	int n=4,*p;
/*
	p=n;
	printf("\n\nAfter executing \nint n=4;*p;\np=n;\n\n");
	printf("\nn = %d\n &n = %d\np =  %d at address &p = %d\n",n,&n,p,&p);
//After executing
//int n=4;*p;
//p=n;
//n = 4
//&n = 10485324
//p =  4 at address &p = 10485312
*/

p=&n;
printf("\n\nAfter executing p=&n\n\n");
	printf("\nValue of *p is %d\nValue of p is %d\n&p = %d\n\nn = %d\n&n = %d",*p,p,&p,n,&n);
//After executing p=&n
//Value of *p is 4
//Value of p is 10485324
//&p = 10485312
//n = 4
//&n = 10485324

*p=1;n=1;
printf("\n\nAfter executing *p=1;n=1;\n\n");
printf("\nValue of *p=%d\nvalue of p=%d\nValue of &p=%d\nvalue of n=%d\nvalue of &n=%d",*p,p,&p,n,&n);
//After executing *p=1;n=1;
//Value of *p=1
//value of p=10485324
//Value of &p=10485312
//value of n=1
//value of &n=10485324
	
	return 0;
}
