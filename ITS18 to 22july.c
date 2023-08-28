#include<stdio.h>
#include<string.h>
void prime(int a){
	int i=2,flag=0;
	for(;i<=a/2;i++){
		   if(a%i==0){
		   	  flag==1;
		   	  break;
		   }
	}
	if(flag==0)
	   printf("\nPrime Number\n");
	else
	   printf("\nNot a Prime Number\n");
}
void sum1(){
	int a,b;
	printf("\nEnter two nos.");
	scanf("%d%d",&a,&b);
	printf("\nSum is %d",a+b);
}
void sum2(int a,int b){
	printf("\nSum is %d",a+b);
}
int sum3(){
	int a,b;
	printf("\nEnter two nos.");
	scanf("%d%d",&a,&b);
	return a+b;
}
int sum4(int a,int b){
	return a+b;
}
void sumList(){
	
	int ch,a,b,c;
	do{
		  printf("\nChoose an Option:");
		  printf("\n1.void sum()");
		  printf("\n2.void sum(int a,int b)");
		  printf("\n3.int sum()");
		  printf("\n4.int sum(int a,int b)");
		  printf("\n5.Exit\n");
		  scanf("%d",&ch);
		  switch(ch){
		  	     case 1:sum1();break;
		  	     case 2:printf("\nEnter two numbers:\n");scanf("%d%d",&a,&b);sum2(a,b);break;
		  	     case 3:printf("Sum is %d",c=sum3());break;
		  	     case 4:printf("\nEnter two numbers:\n");scanf("%d%d",&a,&b);printf("Sum is %d",c=sum4(a,b));break;
										case 5:ch=0;break;
		  	     default:printf("\n\nWrong Choice\n\n");
		  }
	}while(ch!=0);
}
char* getStr(char *a){
	return strcat(a," World");
}
void callByValue(int a){
	a+=10;
	printf("\nInside the function num = %d",a);
}
void callByRef(int *a){
	*a+=10;
	printf("\nInside the function num = %d",*a);
}
void findAreaOfCircle(){
	float r,pi=3.14;
	printf("\nEnter the radius: ");
	scanf("%f",&r);
	printf("\n Area is %f",pi*r*r);
}
void ptrArr(){
	int arr[5],i;
	printf("\nEnter 5 elements:\n");
	for(i=0;i<5;i++)
	   scanf("%d",arr+i);
	for(i=0;i<5;i++)
	   printf("%d",*arr+i);
}
void Ln(){
	int arr[5],i;
	printf("\nEnter 5 elements:\n");
	for(i=0;i<5;i++)
	   scanf("%d",arr+i);
	for(i=0;i<5;i++)
	{
		if(arr[0]<arr[i])
		   arr[0]=arr[i];
	}
	   printf("\n %d is the largest number\n",arr[0]);
}
void Gn(){
	int arr[5],i;
		printf("\nEnter 5 elements:\n");
	for(i=0;i<5;i++)
	   scanf("%d",arr+i);
	for(i=0;i<5;i++)
	{
		if(arr[0]>arr[i])
		   arr[0]=arr[i];
	}
	   printf("\n %d is the smallest number\n",arr[0]);
}
void ptrUnderstanding(){
	int n=5,*ptr,**pptr;
	ptr=&n;
	pptr=&ptr;
	printf("\n n = %d\n ptr = %d\n pptr = %d\n",n,ptr,pptr);
	printf("\n &n = %d\n &ptr = %d\n &pptr = %d\n",&n,&ptr,&pptr);
	printf("\n *ptr = %d\n *pptr = %d\n **ptr = %d\n",*ptr,*pptr,**pptr);
}
int main(){
	int qn,num,*ptr;
	char str[30]="Hello",*a;
	do{
		   printf("\nQ1:Find prime number using for-loop with user defined function");
		   printf("\nQ2:Find the sum of two nos. with user defined function(All 4 types)");
		   printf("\nQ3: Read a string using function");
		   printf("\nQ4: Find the area of Cirlce");
		   printf("\nQ5: WAP for pass by value");
		   printf("\nQ6: WAP fo pass by reference");
		   printf("\nQ7: WAP to assess the elements of the array");
		   printf("\nQ8: WAP to print the largest number from the array using ptr");
					printf("\nQ9: WAP to print the smallest number from the array using ptr");
					printf("\nQ10: Understanding ptr");
					printf("\n");
		   scanf("%d",&qn);
		   switch(qn){
		   	      case 1:printf("\nEnter a number:");scanf("%d",&num);prime(num);break;
		   	      case 2:sumList();break;
		   	      case 3:a=getStr(str);printf("\n%s",a);break;
												case 4:findAreaOfCircle();break;
												case 5:printf("\nEnter a number: ");scanf("%d",&num);callByValue(num);printf("\nValue of num after function is %d",num);break;
												case 6:printf("\nEnter a number: ");scanf("%d",&num);ptr=&num;callByRef(ptr);printf("\nValue of num after function is %d",num);break;
												case 7:ptrArr();break;
												case 8:Ln();break;
												case 9:Gn();break;
											case 10:ptrUnderstanding();break;
												default:printf("\nWrong Choice\n");
		   }
		
	}while(qn!=0);
	return 0;
}
