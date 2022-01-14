#include<stdio.h>
main()
{
	int i;
	i=5;
	int *ptr;
	ptr=&i;//*stores adress of i
	printf("adress of i=%u",&i);
	printf("value of ptr=%u\n",&*ptr);
	printf("%u\n",ptr);
	return 0;
}
