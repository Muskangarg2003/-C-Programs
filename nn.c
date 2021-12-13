#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a,cout=1;
	scanf("%d",&n);
	for(a=2;a<=n;a++)
	{
	 for(i=1;i<=a;i++)
	 {
	 
		if(a%i==0)
		{
			cout=cout+1;
			{
				if (cout==2)
				{
					printf("%d",a);
				}
			}
		}
}
}
return(0);
}
