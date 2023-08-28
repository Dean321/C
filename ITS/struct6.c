#include<stdio.h>
struct emp{
	char ename[30];
	float esal;
};
struct emp st;
void display();
int main(){
	struct emp s;
	printf("\nEnter the name of employee: ");scanf("%s",st.ename);
	printf("\nEnter the salary of employee: ");scanf("%f",&st.esal);
	display();
}
void display(){
	printf("\n%s \t %f",st.ename,st.esal);
}
