#include<stdio.h>
main()
{
	int i,j,k,l,star;
	k=5;
	l=1;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<k;j++)
		{
			printf(" ");
		}
		k--;
		
		for(star=1;star<l;star++)
		{
			printf("* ");
		}
		 l++;
		 printf("\n");
		
	}
}

