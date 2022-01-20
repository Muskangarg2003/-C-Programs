//to compare two strings and print the locations of the unmatched character and no. of matched character
#include<stdio.h>
#include<string.h>
main()
{
	char a[13],b[13];
	int l1,l2,i,n,count=0,loc,end;
	printf("enter the first string:");
	gets(a);
	printf("enter the second string:");
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1>l2)
	{
		end=l1;
	}
	else
	{
		end=l2;
	}
	for(i=0;i<end;i++)
	{
		if(a[i]==b[i])
		{
		  count++;
		// continue;
		}
		else
		{
			loc=i;
			printf("unmatched loc=%d\n",loc);
		}
	}
	printf("matches is %d out of %d",count,end);
	
}
