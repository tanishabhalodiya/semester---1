#include<stdio.h>
#include<string.h>
//define structure
struct employee{
	char name[100];
	int age;
	int salary;
};
int main(){
	//declare and initialize
	struct employee emp1;
	emp1.name[100]="Mivaan";
	strcpy(emp1.name,"Mivan");
	emp1.age=26;
	emp1.salary=50000;
	
	printf("Employee name is: %s\n",emp1.name);
	printf("Employee age is: %d\n",emp1.age);
	printf("Employee name is: %d\n",emp1.salary);
	
}
