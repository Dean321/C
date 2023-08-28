#include<stdio.h>
int main(){
	int j,i,k,arr[5],gn;
for(i=0;i<5;i++)
	   scanf("%d",arr+i);
	printf("\n");   
for(i=0;i<5;i++)
	    printf("\t%d",*arr+i); 
for(i=1;i<5;i++){
		  if(arr[0]<arr[i])
		     arr[0]=arr[i];
	}
printf("\nThe largest number in the array is %d",arr[0]);
	return 0;
}
