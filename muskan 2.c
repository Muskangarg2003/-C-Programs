#include<stdio.h>
#include<conio.h>
struct book
{
	char *title[20];
	int pages;
	float price;
}
int main()
{
	struct book book1;
	book1.title ="learn";
	book1.pages = 562;
	book1.price =320.50;
	printf("books title=%s\n",book1);
	printf("books pages=%d\n",book1.pages);
	printf("books price=%f\n",book1.price);
	return 0;
	
	}
