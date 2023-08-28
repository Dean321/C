#include<stdio.h>
int main(){
int v,*ptr,**pptr;
	v=3000;
	ptr=&v;
	pptr=&ptr;
	printf("\nAddress of &V = %d",&v);
	printf("\nAddress of &ptr = %d",&ptr);
	printf("\nAddress of &pptr = %d",&pptr);
	printf("\n");
	printf("\nValue of V = %d",v);
	printf("\nValue of ptr = %d",ptr);
	printf("\nValue of pptr = %d",pptr);
	printf("\n");
	printf("\nValue of *ptr = %d",*ptr);
	printf("\nValue of *pptr = %d",*pptr);
	printf("\nValue of **pptr = %d",**pptr);
	return 0;
}
/*

Address of &V = 10485324
Address of &ptr = 10485312
Address of &pptr = 10485304

Value of V = 3000
Value of ptr = 10485324
Value of pptr = 10485312

Value of *ptr = 3000
Value of *pptr = 10485324
Value of **pptr = 3000
*/
