//interchange value of two numbers using call by reference ....app of pointer.....using in functions
#include<stdio.h>
void swap(int*,int*);
main()
{
	int num1,num2;
	printf("enter two numbers--");
	scanf("%d%d",&num1,&num2);//here & is used to scan the numbers
	printf("before interchange num1=%d,num2=%d",num1,num2);
	swap(&num1,&num2);//here&is used to pass the adress of numbers to pointer variables x,y
	printf("before interchange num1=%d,num2=%d",num1,num2);//here numbers print after passing adress of these numbers to poiter variable 
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

