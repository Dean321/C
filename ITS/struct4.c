#include<stdio.h>
struct dob{
	int d,m,y;
};
struct student{
	struct dob bday;
	char name[30];
	int rollno;
};
struct student s[100];
int main(){
	int n,i;
	printf("\nEnter the no. of students: ");scanf("%d",&n);
	for(i=0;i<n;i++){
		   printf("\nEnter the Name of student %d: ",i);scanf("%s",s[i].name);
		   printf("\nEnter the rollno of student %d: ",i);scanf("%d",&s[i].rollno);
		   printf("\nEnter the DOB of student %d in the format DD MM YYYY: ",i);scanf("%d%d%d",&s[i].bday.d,&s[i].bday.m,&s[i].bday.y);
	}
	for(i=0;i<n;i++)
	    printf("\n%d  %s\t%d-%d-%d",s[i].rollno,s[i].name,s[i].bday.d,s[i].bday.m,s[i].bday.y);
	
}
