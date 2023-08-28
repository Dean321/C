#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("E:\\Dev Workspace\\ITS\\fgetc.txt","r");
	if(fp==NULL)
	{
		  printf("\n\nError\n\n");
		  exit(0);
	}
	while(1)
	{
		 c=fgetc(fp);
		 if(c==EOF)
		    break;
		 else
		    printf("%c",c);
	}
	fclose(fp);
	return 0;
}
