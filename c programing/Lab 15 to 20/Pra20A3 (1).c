#include<stdio.h>
#include<string.h>
union student{
	char name[9];
	int a;
	int b;
	double c;
};
void main(){

union student s1;

printf("The size of structure:%d",sizeof(s1));


}

