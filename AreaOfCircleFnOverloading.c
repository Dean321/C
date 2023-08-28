#include<stdio.h>
void AreaOfCircle();
float AreaOfCircle();
void AreaOfCircle(int);
float AreaOfCircle(float);
int main(){
	float a,r;
	int ch;
	do{
	    printf("\n1. Run void AreaOfCircle()\n2. float AreaOfCircle()\n3. void AreaOfCircle(int)\n4. float AreaOfCircle(float)\n5.Exit\n");
					scanf("%d",ch);
					switch(ch)
					{
						 case 1:AreaOfCircle();
						        break;
							case 2:a=AreaOfCircle();
														printf("\nArea of circle is %f",a);
														break;
							case 3:printf("\nEnter the radius of the circle: ");
														scanf("%f",&r);
														AreaOfCircle(r);
														break;
							case 4:printf("\nEnter the radius of the circle: ");
	             scanf("%f",&r);
	             a=AreaOfCircle(r);
	             printf("\nArea of Circle is %f",a);
	             break;
	      case 5: ch=0;break;
	      default:printf("\nWrong Choice\n");
					}	
	}while(ch!=0);
	
	return 0;

}
void AreaOfCircle(){
	float r,pi=3.14;
	printf("\nEnter the radius of the circle: ");
	scanf_s("%f", &r);
	printf("\n The area is %f",pi*r*r);
}
float AreaOfCircle(){
	float r,pi=3.14,a;
	printf("\nEnter the radius of the circle: ");
	scanf_s("%f", &r);
	a=pi*r*r;
	return a;
}
void AreaOfCircle()(int rad){
	float a,pi=3.14;
	a=pi*rad*rad;
	printf("\nArea of circle is %f",a);
}
float AreaOfCircle()(float r){
	return 3.14*r*r;
}
