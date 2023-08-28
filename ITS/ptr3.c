#include<stdio.h>
int main(){
	int arr[6],i,sum=0,*ptr;
	ptr=&arr[0];
	printf("\nEnter 6 elements:\n");
	for(i=0;i<6;i++)
	{
		 scanf("%d",ptr+i);
		 printf("\narr[%d] = %d\tptr+i = %d\t*ptr = %d\n\n",i,arr[i],ptr+i,*(ptr+i));
		 sum=sum+*(ptr+i)+5;
	}
	printf("\nSum is %d",sum);
	/*
	
Enter 6 elements:
1

arr[0] = 1      ptr+i = 10485280        *ptr = 1

2

arr[1] = 2      ptr+i = 10485284        *ptr = 2

3

arr[2] = 3      ptr+i = 10485288        *ptr = 3

4

arr[3] = 4      ptr+i = 10485292        *ptr = 4

5

arr[4] = 5      ptr+i = 10485296        *ptr = 5

6

arr[5] = 6      ptr+i = 10485300        *ptr = 6


Sum is 21
	*/
	return 0;
}
