/* Example for ceil() and floor() functions: */

#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n Result : %f" , ceil(1.44) );
    printf("\n Result : %f" , ceil(1.66) );
 
    printf("\n Result : %f" , floor(1.44) );    
    printf("\n Result : %f" , floor(1.66) );

    return 0;
}
// Output:
// Result : 2.000000
// Result : 2.000000
// Result : 1.000000
// Result : 1.000000
