//Call by value
#include<stdio.h>
void call_by_value(int a){
	printf("\nInside func\nBefore value of a = %d ",a);
	a+=10;
	printf("\nAfter value of a = %d",a);
}
int main(){
	int a=10;
	printf("\n Starting \n a = %d\n",a);
	call_by_value(a);
	printf("\n Ending \n a = %d\n",a);
 return 0;
}
