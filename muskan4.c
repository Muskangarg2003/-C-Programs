#include<stdio.h>
struct student
{
int rollno;
char name[20];
float percentage;
};
main()
{
	struct student s1;
	s1.rollno=2202;
	s1.name="kunal";
	s1.percentage=99.8;
	printf("student roll no.=%d\n",s1.rollno);
	printf("student name=%s\n",s1.name);
	printf("percentge=%f",s1.percentage);
	return 0;
	
}

