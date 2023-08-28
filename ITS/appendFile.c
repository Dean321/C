#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("E:\\Dev Workspace\\ITS\\appendFile.txt","a");
	if(fp==NULL)
	{
		  printf("\n\nError\n\n");
		  exit(0);
	}
	while(1)
	{
		 c=getchar();
		 if(c==-1)
		    break;
		 else
		    fputc(c,fp);
	}
	fclose(fp);
	return 0;
}
