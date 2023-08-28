#include<stdio.h>
int main(){
	char c[4]={1,2,3,4};
	int i;
	for(i=0;i<4;i++)
	    printf("\nAddress of &c[%d] = %o\tc[%d] = %d",i,&c[i],i,c[i]);
/*
		Address of &c[0] = 10485312     c[0] = 1
		Address of &c[1] = 10485313     c[1] = 2
		Address of &c[2] = 10485314     c[2] = 3
		Address of &c[3] = 10485315     c[3] = 4
		
		%x=hexadecimal representation
		%o=octal representation
*/	    
	return 0;
}
