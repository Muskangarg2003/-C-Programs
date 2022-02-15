#include<stdio.h>
main()
{
	int i,j,k,l,star,m;
	k=14;
	l=1;
	for(i=0;i<=10;i++)
	{
		
		for(j=0;j<k;j++)
		{
			printf(" ");
		}
		k--;
		
		if(l<=9)
		for(star=0;star<l;star++)
		{
			
			printf("%d ",l);
     	}
	    else
	    {
	    	
	    for(star=0;star<(l+3)/2;star++)
	    	{
	    		printf("%d  ",l);
			}
			
		}
		 l++;
		 
		 
		 
		 printf("\n");
	
		
	}
}

