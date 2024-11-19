#include<stdio.h>
void main( ){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d" ,&a);
	printf("Enter value of b;");
	scanf("%d" ,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a & b:%d %d" ,a ,b);
}
