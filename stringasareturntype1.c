//
#include<stdio.h>
void function(char* str);
int main()
{
	char string[35]="IT Source Technologies Pvt Ltd";   // array declare & initialised with string
	function(&string);                               // function call - call by reference concept - passing address
	char*pt = &string;                               
	printf("\nValue of string after function call = %s",pt);
	return 0;
}
void function(char* str)                          // function defination
{
	printf("\nValue of string= %s",str);
}
