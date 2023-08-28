#include<stdio.h>
int main(){
int yr,f;
printf("\nEnter the year: ");scanf("%d",&yr);
if(yr%4==0){
	 if(yr%100!=0){
    if(yr%400==0){
    	   printf("\nLeap Year");
    }	 	
    else
       printf("\nNot a Leap Year");
	 }
	 else{
	 	  if(yr%400==0){
    	   printf("\nLeap Year");
    }	 	
    else
       printf("\nNot a Leap Year");
	 }

}
else
	printf("\nNot a leap year");

return 0;
}
