#include<stdio.h>
int main(){
int yr,f;
printf("\nEnter the year: ");scanf("%d",&yr);
if(yr%4==0){
	  if(yr%100!=0){
	  	  if(yr%100==0){
	  	  	  printf("\nThe year %d is a leap year.",yr);
	  	  	 
	  	  }
	  	  else{
	  	    goto lbl1; 	     
	  	  }
	  }
	  else{
	  	  printf("\nThe year %d is a leap year.",yr);
	  }
}
else{
	 goto lbl1;
}
lbl1:
	  printf("\nThe year %d is not a leap year.",yr);
	  
return 0;	
}
