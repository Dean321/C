#include<stdio.h>
void AreaOfCircle(){
	float r,pi=3.14;
	printf("\nEnter the radius of the circle: ");
	scanf_s("%f", &r);
	printf("\n The area is %f",pi*r*r);
}
float FindAreaOfCircle(){
	float r,pi=3.14,a;
	printf("\nEnter the radius of the circle: ");
	scanf_s("%f", &r);
	a=pi*r*r;
	return a;
}
void Area(int rad){
	float a,pi=3.14;
	a=pi*rad*rad;
	printf("\nArea of circle is %f",a);
}
float FindArea(float r){
	return 3.14*r*r;
}
int main(){
	//AreaOfCircle(); //No return type or args
	/*------------Return type with no args---------------
	float area=FindAreaOfCircle();
	printf("\nArea of circle is %f",area);
	-----------------------------------------------------*/
	/*-----------No return type with args-----------------
	float r;
	printf("\nEnter the radius of the circle: ");
	scanf("%f",&r);
	Area(r);
	------------------------------------------------------*/
	float r,a;
	printf("\nEnter the radius of the circle: ");
	scanf("%f",&r);
	a=FindArea(r);
	printf("\nArea of Circle is %f",a);
	return 0;
}
