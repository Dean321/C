#include<stdio.h>
void sum(){
	int n1,n2,res=0;
	printf("Enter two nos.");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	printf("Sum is %d",res);
}
void square(){
	int n;
	printf("\n Enter the number:");
	scanf("%d",&n);
	printf("\nSquare of %d is %d",n,n*n);
}
int getNum(){
	int n;
	printf("\n Enter a number:");
	scanf("%d",&n);
	return n;
}
void primeCheck(int n){
	int i=2,flag=0;
	for(;i<=n/2;i++)
	{     
		 if(n%i==0)
		 {     
		 	 flag=1;
		 	 break;
		 }
	}
	flagCheck(flag);//Warning:Implicit Call
}
void flagCheck(int f){
if(f==1)
	   printf("\n Not a Prime no.\n");
	else
	   printf("\n Is a Prime no.\n");	
}
int main(){
int num,fv; 
num=getNum();
primeCheck(num);
return 0;
}
