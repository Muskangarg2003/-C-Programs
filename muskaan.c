#include<stdio.h>
#include<conio.h>
struct student 
{
	int rollno;
	char name[20];
	float percentage;
};
main()
{
	 struct student s1,s2;
	 clrscr();
	 printf("---------enter the details of two students----------------");
	 printf("rollno\tName\tpercentage");
	 scanf("%d%s%f",&s1.rollno,s1.name,&s1.percentage);
	scanf("%d%s%f",&s2.rollno,s2.name,&s2.percentage);
	printf("----------student 1------------\n");
	printf("%d\n%s\n%0.2f\n",s1.rollno,s1.name,s1.percentage);
		printf("----------student 2------------\n");
	printf("%d\n%s\n%0.2f\n",s2.rollno,s2.name,s2.percentage);
	return 0;


}


	 

