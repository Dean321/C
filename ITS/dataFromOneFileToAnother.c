#include<stdio.h>
#include<stdlib.h>
int main()
{
	 FILE *f1,*f2;
	 char ch;
	 f1=fopen("E:\\Dev Workspace\\ITS\\f1.txt","r");
	 if(f1==NULL)
	 {
	 	  printf("\n\nError\n\n");
	 	  exit(0);
	 }
	 f2=fopen("E:\\Dev Workspace\\ITS\\f2.txt","w");
	 if(f2==NULL)
	 {
	 	  printf("\n\nError\n\n");
	 	  exit(0);
	 }
	 while(1)
	 {
	 	  ch=fgetc(f1);
	 	  if(ch==-1)
	 	     break;
	 	  else
	 	    putc(ch,f2);
	 }
	 fclose(f2);fclose(f1);
	 return 0;
}
