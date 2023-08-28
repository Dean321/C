#include <stdio.h>
 
int main()
{
	/*---------------------------------------------------------------
	Q: 
	   *
   ***
  *****
 *******
*********
	
	int row, c, n, temp;
 printf("Enter the number of rows in pyramid of stars you wish to see ");
 scanf("%d",&n);
 temp = n;
 for(row=1;row<=n;row++)
 {
   for(c=1;c<temp;c++)
     printf(" ");
   temp--;
   for(c=1;c<=2*row-1;c++)
      printf("*");
  printf("\n");
 }
	-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
Q:
   *
  *A*
 *A*A*
*A*A*A*

int n, c, k, space, count = 1;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    space = n;
    for ( c = 1 ; c <= n ; c++)
    {
        for( k = 1 ; k < space ; k++)
           printf(" ");
        for ( k = 1 ; k <= c ; k++)
        {
            printf("*");
            if ( c > 1 && count < c)
            {
                 printf("A");    
                 count++; 
            }      
        }    
        printf("\n");
        space--;
        count = 1;
    }
--------------------------------------------------------------------------*/	
/*-------------------------------------------------------------------------
Q:
        1
       232
      34543
     4567654
    567898765

int n,c,d,num=1,space;
scanf("%d",&n);
space = n - 1;
for(d=1;d<=n;d++)
{
  num = d;
  for(c=1;c<=space;c++)
  printf(" ");
  space--;
  for(c=1;c<=d;c++)
  {
     printf("%d", num);
     num++;
  }
  num--;
  num--;
  for(c=1;c<d;c++)
  {
    printf("%d", num);
    num--;
  }
  printf("\n");
}
--------------------------------------------------------------------*/
/*-------------------------------------------------------------------
Q:
A
B B
C C C
D D D D
E E E E E

int i, j;
char input, alphabet = 'A';
printf("Enter the uppercase character you want to print in last row: ");
scanf("%c",&input);
  for(i=1; i <= (input-'A'+1); ++i)
  {
    for(j=1;j<=i;++j)
      printf("%c", alphabet);
    ++alphabet;
    printf("\n");
  }
--------------------------------------------------------------------------------*/
/*--------------------Pascal's Triangle------------------------------------------
Q:
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
 
int rows,coef=1,space,i,j;
printf("Enter number of rows: ");
scanf("%d",&rows);
for(i=0; i<rows; i++)
{
   for(space=1; space <= rows-i; space++)
       printf("  ");
 		for(j=0; j <= i; j++)
   {
      if(j==0||i==0)
         coef = 1;
      else
         coef = coef*(i-j+1)/j;
      printf("%4d", coef);
   }
   printf("\n");
}
---------------------------------------------------------------------------*/
/*-------------------------Floyd's Triangle---------------------------------
Q:
1
2 3
4 5 6
7 8 9 10

int rows,i,j,number=1;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=1; i <= rows; i++)
{
   for(j=1; j <= i; ++j)
   {
     printf("%d ", number);
     ++number;
   }
 printf("\n");
}
----------------------------------------------------------------------------*/
	return 0;
}
