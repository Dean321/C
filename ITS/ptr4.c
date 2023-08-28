//Call By Reference
#include<stdio.h>
void swap(int *a,int *b);

int main(){
	int n1,n2;
	printf("\nEnter two nos.:\n");scanf("%d%d",&n1,&n2);
	printf("\na = %d\tb = %d",n1,n2);
	printf("\n&a = %d\t&b = %d",&n1,&n2);
	swap(&n1,&n2);
/*
Enter two nos.:
2
3

a = 2           b = 3
&a = 10485324   &b = 10485320

*a = 3          *b = 2
a = 10485324    b = 10485320
&a = 10485280   &b = 10485288
*/
	return 0;
}

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n *a = %d\t *b = %d\n",*a,*b);
	printf("\n a = %d\t b = %d\n",a,b);
	printf("\n &a = %d\t &b = %d",&a,&b);
}


