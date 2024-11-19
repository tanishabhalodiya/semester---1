#include<stdio.h>
void main( ){
	int a,b,temp;
	printf("Enter the value of a:");
	scanf("%d" ,&a);
	printf("Enter value of b;");
	scanf("%d" ,&b);
	temp=a;
	a=b;
	b=temp;
	printf("new value of a & b:%d %d" ,a ,b);
}
