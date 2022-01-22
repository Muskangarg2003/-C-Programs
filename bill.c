#include<stdio.h>
main()
{
	int wc,cd,diets,cost,l,et,price,total; //worker charge,compulsory diets,chatotal diets;cost of one diet;extra things
	printf("worker charges:");
	scanf("%d",&wc);
	printf("\ncompulsory diets:");
	scanf("%d",&cd);
	printf("\ntotal diets:");
	scanf("%d",&diets);
	printf("\ncost per diet:");
	scanf("%d",&cost);
	printf("\n packets of lays having cost 20 rs:");
	scanf("%d",&l);
	printf("\n no. of extra things and their cost");
	scanf("%d",&et);
	scanf("%d",&price);
	if(diets>cd)
	total=wc+(cd*cost)+((diets-cd)*cost)+(l*20)+(et*price);
	else
	total=wc+(cd*cost)+(l*20)+(et*price);
	return 0;
	
	
}
