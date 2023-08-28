#include<stdio.h>
struct telephone{
	int num;
	char name[30];
};
struct telephone i={123456789,"Jammy"};

int main(){
	struct telephone j;
	printf("\nName = %s\t Number = %d",i.name,i.num);
	return 0;
}
