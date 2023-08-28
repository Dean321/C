//Write into and read from Array using ptr
#include<stdio.h>
int main(){
	int j,i,arr[5];
	for(i=0;i<5;i++)
	   scanf("%d",arr+i);
	printf("\n");   
	for(j=0;j<5;j++)
	    printf("\t%d",*arr+j);   
	
	return 0;
}
