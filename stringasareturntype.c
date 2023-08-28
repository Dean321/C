#include <stdio.h> 
#include<string.h>
char* fun_name(char* a)
{
   return strcat(a," World");
} 
int main() 
{
   char a[10]="hello";
   char* b;
   b=fun_name(a);
   printf("%s\n", b);
   return 0;
} 
/* strings in C are the character arrays which can be passed to the functions using char* or char[]. 
Since they are arrays they are passed to the functions as pointers by default.
 Hence you do not need to return the modified string as it gets updated in the calling function.
 For crosscheck see the example stringasareturntype1.cs
 &
if you still want to return a string just make the return type of the function as char*.
*/
