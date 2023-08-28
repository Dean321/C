#include<stdio.h>
int sum(int a, int b){
	return a+b;
}
void sum(){
	int a,b,res;
	printf("\nEnter two nos.: ");
	scanf("%d%d",&a,&b);
	printf("\nSum is %d",a+b);
}
int main(){
	int a,b,res;
	int ch;
	do{
	    printf("\n1.To call int sum(int,int)\n2. To call void sum()\n3. Exit\n");scanf("%d",ch);
					switch(ch)
					{
						 case 1:printf("\nEnter two nos.: ");scanf("%d%d",&a,&b);
	             res=sum(a,b);
	             printf("\nSum is %d",res);
	             break;
	      case 2:sum();break;
	      case 3: ch=0;break;
	      default:printf("\nWrong Choice\n");
					}	
	}while(ch!=0);
	
	return 0;
}
