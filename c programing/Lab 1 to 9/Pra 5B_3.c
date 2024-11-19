#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the number a:");
	scanf("%d" ,&a);
	printf("Enter 1 for multiplication:");
	scanf("%d" ,&b);
	if(b==1){
		c=a<<1;
	}else{
		c=a>>1;
	}
	printf("the ans is :%d",c);
}
