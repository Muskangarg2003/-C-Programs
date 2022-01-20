//strcat(s1,s2)to combine two strings ....to concatenete two strings...s1=home s2=town ....after concatenation s1=hometown

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[10],s2[10];
	printf("enter string 1\n ");
	gets(s1);
	printf("enter string 2 which is copied in s1");
	gets(s2);
	strcat(s1,s2);
	printf("\n string after concatenation=%s",s1);
	return 0;
}
