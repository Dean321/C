#include <stdio.h>
 
int main(void)
{
float a, b, c;
 
printf(" Reading floating-point numbers\n");
printf("Compare the output with the source code.\n");
printf("----------------------------------------\n\n");
printf("Enter three floating-point numbers, separated by space: \n");
 
/* scanf("%e%f%g", &a, &b, &c); */
/* read three float type inputs */
scanf_s("%e%f%g", &a, &b, &c);
printf("Here are the numbers entered in plain\n");
printf("floating-point notation:\n");
printf("%f %f %f\n", a, b, c);
 
return 0;
}
 
