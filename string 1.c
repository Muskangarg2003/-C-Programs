//program using library function of string....to find the length of string name s {strlen(s)}
#include<stdio.h>
#include<string.h>//this header file is used bcs we use library functions of string
main()
{
	char str[13];
	int z; //z tells the length of string
	printf("\nenter the number of characters <=12--");//bcs LAST SPACE is occupied by null character
	gets(str);//this is used to input stRING INSTEAD of scanf
	z=strlen(str);//this is library function used to find length of string str 
	printf("length of string:%d",z);
	return 0;
}
