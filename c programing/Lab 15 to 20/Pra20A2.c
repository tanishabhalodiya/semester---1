#include<stdio.h>
#include<string.h>
struct book{
	char title[100];
	char author[100];
	int publish;
	int price;
};
void main(){
	int i;
	struct book b[3];
	for(i=0;i<3;i++){
			printf("Enter book name: ");
		scanf("%s",b[i].title);
			printf("Enter author name: ");
		scanf("%s",b[i].author);
			printf("Enter publicaion of book: ");
		scanf("%d",&b[i].publish);
			printf("Enter price of book: ");
		scanf("%d",&b[i].price);
	}
	for(i=0;i<3;i++){
			printf("book name is: %s \n",b[i].title);
			printf("author's name of book is: %s \n",b[i].author);
			printf("publication of book is: %d \n",b[i].publish);
			printf("price of book is: %d \n",b[i].price);
	}
}
