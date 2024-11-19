#include<stdio.h>
void add(int a,int b);
void main(){
	int a,b;
	printf("Enter the two number a and b: ");
	scanf("%d %d",&a,&b);
	add(a,b);
}
void add(int a,int b){
	printf("Sum is:%d",a+b);
}
