#include<stdio.h>
#include "string.h"

struct book{
		int id, price;
		char name[190];
	} b,v;

int main()
{
	printf("Add name of the books to our server.");
	scanf("%s",&b.name);
	printf("Add id and price of the books to our server.");
	scanf("%d %d", &b.id, &b.price);
	
	
	printf("Add name of the Second books to our server.");
	scanf("%s",&v.name);
	printf("Add id and price of the Second books to our server.");
	scanf("%d %d", &v.id, &v.price);
	
	printf("\n##--------------##\n");
	printf("Name of the book YOu have added is: %s and it's id and price are %d and %d rs.\n",b.name,b.id,b.price);
	printf("\n##--------------##\n");
	printf("Name of the book YOu have added is: %s and it's id and price are %d and %d rs.\n",v.name,v.id,v.price);
	

}
