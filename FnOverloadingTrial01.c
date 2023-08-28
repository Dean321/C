#include<stdio.h>
void multiply(void *ptr,int s,int mul_with){
	int *ptr2Int;
	float *ptr2Float;
	if(s==0){
		ptr2Int=(int *)ptr;
		(*ptr2Int)=(float *)ptr;
	}
	else if(s==1){
		ptr2Float=(float *)ptr;
		(*ptr2Float)=(*ptr2Float)*(mul_with);
	}
}
int main(){
	int p=10;
	float q=30.0;
	multiply(&p,0,10);
	multiply(&q,1,20);
	printf("\np = %d",p);
		printf("\nq = %d",q);
	return 0;
}
/*
---------------------------OUTPUT------------------------

p = 10485324
q = 0

*/
