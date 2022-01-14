#include<stdio.h>
struct distance
{
	int km;
	int m;
};
main()
{
	int e;
	struct distance d1,d2,diff;
	printf("enter distance(1)in km and m");
	scanf("%d%d",&d1.km,&d1.m);
		printf("enter distance(2)in km and m");
	scanf("%d%d",&d2.km,&d2.m);
	diff.km=d1.km-d2.km;
	diff.m=d1.m-d2.m;
	e=diff.km*1000+diff.m;
	printf("%dmeters",e);
	return 0;
	
	
	

}

