#include<stdio.h>
int main(){
int yr,f;
printf("\nEnter the year: ");scanf("%d",&yr);
if(yr%4==0){
	  if(yr%100!=0){//For Century years
	  	  if(yr%400==0){
	  	  	           printf("\n%d",yr%400);
	  	  	           printf("\nThe year %d is a leap year.",yr);
	  	  }
	  	  else{
	  	        printf("\nThe year %d is not a leap year.",yr); 	     
	  	  }
	  }
	  else{
	    		  printf("\nThe year %d is a leap year.",yr);
	  }
}
else{
	  printf("\nThe year %d is not a leap year.",yr);
}
return 0;
}
