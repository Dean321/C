#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int n;
	fp=fopen("E:\\Dev Workspace\\ITS\\fscanf.txt","a");
	if(fp==NULL)
	{
		  printf("\n\nError\n\n");
		  exit(0);
	}
	fscanf(fp,"%d",n);
	printf("\n N = %d",n);
	
	fclose(fp);
	return 0;
}
