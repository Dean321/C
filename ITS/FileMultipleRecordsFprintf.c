#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char n[30];
	int a;
	float s;
	int nm,i;
	fp=fopen("E:\\Dev Workspace\\ITS\\MultipleRecords.txt","a");
	if(fp==NULL)
	{
		  printf("\n\nError\n\n");
		  exit(0);
	}
	printf("\n Enter the no. of students: ");scanf("%d",&nm);
	for(i=0;i<nm;i++){
	      printf("\nEnter name[%d]: ",i);scanf("%s",n);fprintf(fp,"\n%d. %s",i,n);
							printf("\nEnter age[%d]: ",i);scanf("%d",&a);fprintf(fp,"\t%d",a);
							printf("\nEnter salary[%d]: ",i);scanf("%f",&s);fprintf(fp,"\t%.2f",s);
								   
	}
	
	fclose(fp);
	return 0;
}
