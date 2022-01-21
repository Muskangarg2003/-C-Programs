#include<stdio.h>
#include<string.h>
main()
{
	char str[22];
	int count=0,n,m,c=0,i;
	printf("enter the string ");
	gets(str);
	printf("how many characters to extract:");
	scanf("%d",&m);
	printf("from which charcater position to start");
	scanf("%d",&n);
	printf("string after extracting %d characters from %d position we get--",m,n);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
		if(count>n&&c<m)
		{
			printf("%c",str[i]);
			c++;
		}
	}
	return 0;
}
