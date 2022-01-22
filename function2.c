#include<stdio.h>
int greatest(int,int);  //function declaration
main()
{
	int a,b,c,d,e;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	d=greatest(a,b); //here we see greatest between a and b and return it into d 
	e=greatest(d,c); //now see from d and c and return it to e
	printf("among %d,%d,%d the no.%d is greatest",a,b,c,e);
	return 0;
}
int greatest(int x,int y)
{
	int z;
	z=(x>y)?x:y; //conditional operator
	return(z);
}
