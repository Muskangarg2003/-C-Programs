
#include<stdio.h>
struct employee
{
	int emp_code;
	char emp_name[20];
	int dept_code;
	float salary;

};

main()
{
	struct employee emp[2]={
		{101,"raj",5,21234.33},
		{102,"paul",6,171122.22},
		{103,"arun",4, 7638.77}
	};
	
	int i;
	printf("*********employee information********");
	for(i=0;i<3;i++)
	{
		printf("\nemployee code:%d",emp[i].emp_code);
		printf("\nemployee name:%s",emp[i].emp_name);
		printf("\ndepartement:%d",emp[i].dept_code);
		printf("\nsalary:%0.2f",emp[i].salary);
	}
	return 0;
}






