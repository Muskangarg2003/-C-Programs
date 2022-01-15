//to copy a string to another string using libraary function strcpy()
#include<stdio.h>
#include<string.h>
main()
{
	char s1[]="hello";
	printf("original string=%s",s1);
	strcpy(s1,"how are you");//to copy a string how are you in string s1...as a result hello is replacable by how are u?
	printf("\nstring after copying:%s",s1);
	return 0;
}

