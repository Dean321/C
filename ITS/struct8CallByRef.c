#include<stdio.h>
struct emp{
	char ename[30];
	float esal;
};
void display(struct emp *st);
int main(){
	struct emp s;
	printf("\nEnter the name of employee: ");scanf("%s",s.ename);
	printf("\nEnter the salary of employee: ");scanf("%f",&s.esal);
	display(&s);
}
void display(struct emp *st){
	printf("\n%s \t %f",(*st).ename,(*st).esal);//st->name
}
