//program that justifies text ie if you enter 21 letter word and length you fixed is 20  then last char is enter in new line
#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i,m,limit_len,j=2;
	printf("enter a string");
	gets(str);
	printf("enter length at which justification occurs ie length u fixed");
	scanf("%d",&limit_len);
	m=limit_len;
	for(i=0;str[i]!=0;i++)
    {
    	if(i>=limit_len)
    	{
    		printf("\n");
    		printf("%c",str[i]);
    		limit_len=j*m;//we also have to fix the length of second line 
    		j++;
		}
		else
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}
