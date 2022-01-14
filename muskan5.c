#include<stdio.h>
struct employee
{
	int emp_ID;
	char emp_name;
	int dept_no;
};
main()
{
	struct employee e[10];
	int i,n;
	printf("how many employees in the organisation=\n");
	scanf("%d",&n);
	printf("***************enter the details of employee******************\n");
	for(i=0;i<n;i++)
	{
		printf("enter the employee_id,employee_name,dept_no of emp[%d]\n",i);
		scanf("%d%s%d",&e[i].emp_ID,&e[i].emp_name,&e[i].dept_no);
	}
	printf("employee details.....\n");
		for(i=0;i<n;i++)
		{
					printf("%d%s%d",&e[i].emp_ID,&e[i].emp_name,&e[i].dept_no);

		}
		return 0;

}
