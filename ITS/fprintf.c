#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c[30];
	fp=fopen("E:\\Dev Workspace\\ITS\\appendFile.txt","a");
	if(fp==NULL)
	{
		  printf("\n\nError\n\n");
		  exit(0);
	}
	printf("\nEnter the string: ");
	scanf("%[^\n]*s%",c);
	fprintf(fp,"%s",c);
	fclose(fp);
	return 0;
}
