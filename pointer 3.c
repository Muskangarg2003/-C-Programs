#include<stdio.h>
main()
{
	int i,j,*ptr;
	i=5;
	j=2;
	ptr=&i;
	printf("adress of i=%u",&i);
	printf("\nvalue pointed by ptr=%d",*ptr);
	printf("\nvalue stored in ptr=%u",ptr);
	*ptr=10;
	printf("\ncurrent value of i=%d",i);
	j=*ptr;
	printf("\ncureent value of j=%d",j);
	return 0;
}
