#include<stdio.h>
#include<string.h>
#include<conio.h>
void printQ1(){
	printf("\nHello World");
}
void printQ2(int a){
	if(a<=50)
	  printf("\n %d is less than 50",a);
 else
	  printf("\n %d is greater than 50",a);
}
void printQ3(int a,int b,int c){
	int avg=(a+b+c)/3;
	if(avg>=75)
		printf("Distinction");
	else if(avg<75 && avg>=60)
		   printf("First Class");	   
	else if(avg<60 && avg>=50)
		  printf("Second Class");
	else if(avg<50)
		    printf("Failed");
}
void printQ4(){
	char c;
	printf("\nEnter an alphabet: ");
	scanf("%s",&c);
	switch(c){
		case 'a':printf("\nVowel\n");break;
		case 'A':printf("\nVowel\n");break;
		case 'e':printf("\nVowel\n");break;
		case 'E':printf("\nVowel\n");break;
		case 'i':printf("\nVowel\n");break;
		case 'I':printf("\nVowel\n");break;
		case 'o':printf("\nVowel\n");break;
		case 'O':printf("\nVowel\n");break;
		case 'u':printf("\nVowel\n");break;
		case 'U':printf("\nVowel\n");break;
		default:printf("\nNot a vowel\n");
	}
}
void printQ5(int a){
	int f;
	f=a%2==0?1:0;
	if(f==1)
	printf("\nEven");
	else
	printf("\nPrime");
}
int printQ6(int a){
	int cn,fact=1,i;
	printf("\nChoose a method to be used:\n1: Using while-loop\n2: Using for-loop\n");
	scanf("%d",&cn);

	if(cn==1)
	{
		i=a;
		while(i>0){
			fact=fact*i;
			i--;
		}
		return fact;
	}
	else if(cn==2){
		for(i=1;i<=a;i++)
		   fact=fact*i;
		return fact;
	}
	else{
		printf("\nWrong Choice");
		return 0;
	}
}
void printQ7(){
	int sum=0,a;
	printf("\n Enter nos.\n If you wish to terminate type 0\n\n");
	do{
		scanf("%d",&a);
		sum=sum+a;
	}while(a!=0);
	printf("The total sum is %d",sum);
}
void printQ8(){
	int sum=0,i;
	for(i=1;i<=100;i++)
	   sum=sum+i;
	printf("\n The total sum of 1 to 100 is %d",sum);
}
void printQ9(){
	int arr[5],i;
	printf("\n Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	   scanf("%d",&arr[i]);
printf("\n 5 elements of the array are\n");
for(i=0;i<5;i++)
	   printf(" %d ",arr[i]);
}
void printQ10(){
	int n,i=1,sum=0;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0)
		  sum=sum+i;
		i++;
	}
	if(sum==n)
	  printf("\n The number %d is a perfect number\n",n);
 else
   printf("\n The number %d is not a perfect number\n",n);
}
void printQ11(){
	int i,j,sum;
	for(i=1;i<=100;i++){
		j=1,sum=0;
		while(j<i){
			if(i%j==0)
			  sum=sum+j;
			j++;
		}
		if(sum==i)
		  printf("\t%d",i);
	}
}
void printQ12(){
	char arr[30];
	printf("\n Enter your string:");
	scanf("%s",arr);
	printf("\n%s is the string stored",arr);
	printf("\n%p is the address\n",(void*)arr);//to print the address
}
void printQ13(){
	char a[50],b[20]="ERR";
	printf("\n Enter a string: ");
	scanf("%s",a);
	printf("\n The lenght of the string is %d",strlen(a));
	if(strcmp(a,b)==0)
	   printf("\nEqual strings a & b are.");
	else
	   printf("\nNot Equal strings a & b are.");
printf("\n Concatination of a & b are %s",strcat(a,b));
printf("\n Copying a in b will be b=%s",strcpy(b,a));
}
void printQ14(){
	char a=NULL;
	char str[50];
	int i,cnt=0;
	printf("\n Enter a string: ");
	scanf("%s",str);
	printf("\n Enter the character to be found: ");
	scanf(" %c",&a);
	printf("\n\n");
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==a)
		  cnt++;
	}
	printf("\n No. of %c in %s is %d\n",a,str,cnt);
}
void printQ15(){
	char str[100];
	int v,c,d,w,i;
	printf("\n Enter a string:");
 scanf(" %[^\n]%*c",str);//To read string with whitespaces
 v=c=d=w=0;
 for(i=1;i<=strlen(str);i++){
 	   if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
 	      v++;
 	   else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
 	      c++;
 	   else if(str[i]==' ')
					   w++;
					else if(str[i]>=0&&str[i]<=9)
					   d++; 
 }
 printf("\n In string %s,\n No.of vowels is %d\n No.of consonents is %d\nNo. of digits is %d,No. of whitespaces is %d",str,v,c,d,w);
}
void printQ16(){
	int a,b;
	printf("\n Enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\n a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n a=%d b=%d\n",a,b);
}
void printQ17(){
	int num,sum=0,t,r;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	t=num;
	while(t!=0){
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	printf("\nFor %d the sum is %d\n",num,sum);
}
void printQ18(){
	int num,r,t;
	printf("\n Enter the number: ");
	scanf("%d",&num);
	t=num;
	printf("\n Reverse of %d is ",num);
	while(t!=0){
		r=t%10;
		printf("%d",r);
		t=t/10;
	}
}
void printQ19(){
	//--------------------For String---------------------------------
	char a[50],b[50];
	printf("\n Enter a string: ");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	  printf("\nString is a Palindrome\n");
	else
	  printf("\nString is not a Palindrome\n");
//-------------------------For Number-------------------------------
int on,rn=0,r,n;
printf("\nEnter the number: ");
scanf("%d",&n);
on=n;
while(n!=0)
{
	 r=n%10;
	 rn=rn*10+r;
	 n=n/10;
}
if(on==rn)
  printf("\nNumber is a Palindrome\n");
else
  printf("\nNumber is not a Palindrome\n");
}
void printQ20(){
int i,s=1,f=0,t;
for(i=1;i<=5;i++)
{
	printf(" %d ",f);
	t=f+s;
	f=s;
	s=t;	
}	
}
void printQ21(){
	char ch,str[30];
	int i=0;
	printf("\n Enter your string with whitespaces:");
	while(ch!='\n'){
		ch=getchar();
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	printf("\nString is %s",str);
}

int main(){
	int qn,num,res;
	int s1,s2,s3;
	char a;
	char *str[50],Uch;
	do{
		   printf("\nQ1: WAP for Hello World.");
					printf("\nQ2: WAP to check the number is greater than 50(using if-else)");
					printf("\nQ3: WAP average of 3 subjects(using else-if ladder)");
					printf("\nQ4: WAP to check whether it is a vowel(using switch-case)");
					printf("\nQ5: WAP to check whether the number is even or prime(Using Conditional statement)");
		   printf("\nQ6: WAP to find the factorial of a number");
		   printf("\nQ7: WAP to add nos. as long a non-zero number is entered(Using do-while loop)");
		   printf("\nQ8: WAP to print the sum of 1-100");
		   printf("\nQ9: WAP to store 5 elements in a 1D array");
		   printf("\nQ10: WAP to check whether the number entered is a perfect number");
		   printf("\nQ11: WAP to print perfect nos. between 1 to 100");
		   printf("\nQ12: WAP to read a string from the user");
		   printf("\nQ13: WAP for strlen,strcat,strcmp,strcpy");
		   printf("\nQ14: WAP to find the frequency of a character");
		   printf("\nQ15: WAP to find the frequency of vowels,consonents,digits & whitespaces");
		   printf("\nQ16: WAP to swap two nos. without using a third variable");
		   printf("\nQ17: WAP to find sum of all digits of the nmber entered");
		   printf("\nQ18: WAP to print the reverse of the number entered");
		   printf("\nQ19: WAP to check whether it is a palindrome");
		   printf("\nQ20: WAp to print Fibonacci series");
		   printf("\nQ21: WAP to accept string with whitespaces");
		   printf("\n22: Exit Program");
		   printf("\n");
					scanf("%d",&qn);
		   switch(qn){
		   	           case 1:printQ1();
																	       break;
		   	           case 2:printf("\n Enter the number to be checked: \n");
																	       scanf("%d",&num);
																								printQ2(num);
																								break;
		   	           case 3:printf("\n Enter the marks for Subject 1: ");
																	       scanf("%d",&s1);
																	       printf("\n Enter the marks for Subject 2: ");
																	       scanf("%d",&s2);
																	       printf("\n Enter the marks for Subject 3: ");
																	       scanf("%d",&s3);
																	       printQ3(s1,s2,s3);
																	       break;
																	case 4:printQ4();
																	       break;
																	case 5:printf("\n Enter the number to be checked: \n");
																	       scanf("%d",&num);
																								printQ5(num);
																								break;
																	case 6:printf("\n Enter a number: \n");
																	       scanf("%d",&num);
																								res=printQ6(num);
																								printf("Factorial of %d is %d\n",num,res);
																								break;
																	case 7:printQ7();break;
																	case 8:printQ8();break;
																	case 9:printQ9();break;
																case 10:printQ10();break;
																case 11:printQ11();break;
																case 12:printQ12();break;
																case 13:printQ13();break;
																case 14:printQ14();break;
																case 15:printQ15();break;
																case 16:printQ16();break;
																case 17:printQ17();break;
																case 18:printQ18();break;
																case 19:printQ19();break;
																case 20:printQ20();break;
																case 21:printQ21();break;
																case 22:qn=0;break;
		   	           default:printf("\n Wrong Choice\nExiting\n");
		   }
	}while(qn>0);
return 0;
}

