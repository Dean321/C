#include<stdio.h>
struct student{
	char name[30];
	int rollno,marks;
}stud[100];
int main(){
	int i,n;
	printf("\nEnter the no. of students: ");scanf("%d",&n);
	for(i=0;i<n;i++){
		   printf("\nEnter the name of student %d: ",i);scanf("%s",stud[i].name);
		   printf("\nEnter the rollno of student %d: ",i);scanf("%d",&stud[i].rollno);
		   printf("\nEnter the marks of student %d: ",i);scanf("%d",&stud[i].marks);
		   printf("\n");
	}
	for(i=0;i<n;i++)
		   printf("\n %d  %s\t%d",stud[i].rollno,stud[i].name,stud[i].marks);
	
	return 0;
}
