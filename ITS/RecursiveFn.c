#include<stdio.h>

int sum(int);//Function Prototype

int main(){
int num,res=0;
printf("\n Enter the number:");
scanf("%d",&num);
res=sum(num);
printf("\nSum is %d",res);
	return 0;
}
/*---------------Function Definition----------------*/
int sum(int a){
	if(a!=0)
	  return a*sum(a-1);
	else
	  return a;
}
