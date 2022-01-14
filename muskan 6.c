#include<stdio.h>
struct student 
{
	int rollno;
	char name[20];
	int marks[3];
};
struct student s[15];
int i,n,loc=0;
float per[15],large;
printf("enter the no. of students");
scanf("%d",&n);
for(i=0;i<n,i++)
{
	printf("enter the details of student[%d]",i);
	scanf("%d%s%d%d%d",&s[i].rollno,&s[i].name,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
	}
