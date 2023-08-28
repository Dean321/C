#include<stdio.h>
int main(){
	int n=123;
	int **p2;
	int *p1;
	p1=&n;
	p2=&p1;
printf("\nN = %d",n);
printf("\n*p1 = %d",*p1);
printf("\n**p2 = %d",**p2);
printf("\n");
printf("\n&N = %d",&n);
printf("\n&p1 = %d",&p1);
printf("\n&p2 = %d",&p2);
printf("\n");
printf("\np1 = %d",p1);
printf("\np2 = %d",p2);
printf("\n*p2 = %d",*p2);
printf("\n");

return 0;
}
