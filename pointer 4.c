//to show how operators work in case of pointers
#include<stdio.h>
main()
{
	int *ptr1,*ptr2;
	float *ptr3;
	int i;
	float j;
	j=3.5;
	int a[5]={10,20,30,40,50};
	ptr1=&a[0];
	printf("%u",&a[0]);
	printf("\n------after assignement ptr1=&a[0]------");
	printf("\nvalue stored in ptr1=%d",ptr1);
	printf("\nvalue pointed by ptr1=%d",*ptr1);
	ptr1=ptr1+2;//this jumps by 2 integers and goes to a[2] ,it takes two jumps a[0]to a[1]and then a[1]to a[2]..thus shows the result of a[2]
	printf("\n------after assignement ptr1=ptr1+2------");
    printf("\nvalue stored in ptr1=%d",ptr1);
	printf("\nvalue pointed by ptr1=%d",*ptr1);
	ptr1=++ptr1;
	printf("\n-------after assignement ptr1=++ptr1------");
    printf("\nvalue stored in ptr1=%d",ptr1);
	printf("\nvalue pointed by ptr1=%d",*ptr1);
	ptr2=&a[3];
	printf("\n-------after assignement ptr2=&a[3]------");
	printf("\nvalue stored in ptr2=%d",ptr2);
	printf("\nvalue pointed by ptr2=%d",*ptr2);
	ptr2=ptr2-2;
	printf("\n-------after assignement ptr2=ptr2-2------");
	printf("\nvalue stored in ptr2=%d",ptr2);
	printf("\nvalue pointed by ptr2=%d",*ptr2);
	ptr2=--ptr2;
	printf("\n--------after assignement ptr2=--otr2------");
	printf("\nvalue stored in ptr2=%d",ptr2);
	printf("\nvalue pointed by ptr2=%d",*ptr2);
	ptr3=&j;
	printf("\n-----after assignement ptr3=&j-------");
	printf("\nvalue stored in ptr3=%d",ptr3);
	printf("\nvalue pointed by ptr3=%f",*ptr3);
	
	return 0;
	
	
}
