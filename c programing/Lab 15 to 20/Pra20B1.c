#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int rollno;
	
};
void main(){
	struct student *ptr,s;
	ptr=&s;
	printf("Enter name: ");
	scanf("%s",&ptr->name);
	printf("Enter roll number of student: ");
	scanf("%d",&ptr->rollno);
	printf("name: %s \n",ptr->name);
	printf("roll number of student: %d \n",ptr->rollno);
}

