//to concatenate two strings without library functions
#include<stdio.h>
void str_concate(char [],char []);//function declaration
main()
{
	char s1[13],s2[13];
	printf("enter string 1");
	gets(s1);
	printf("enter string 2");
	gets(s2);
	str_concate(s1,s2); //function call
	printf("string after concatenation=%s",s1);
	return 0;
	
}
void str_concate(char str1[],char str2[]) //function defination
 {
 	int i,j,count=0;
 	for(i=0;str1[i]!='\0';i++) 
 	   count=count+1;  //count tells the length of string 1...mtlb jab tak ladt character null ni hota tab tak kine character hai...aur us se aage next string copy honi start hogi
 	for(j=count,i=0;str2[i]!='\0';i++,j++)   
 	    str1[j] = str2[i]; //string 2 is copied at end of string 1
 	    str1[j]='\0'; //making last character as null charcater
 }
