#include<stdio.h>
void main(){
	int a,r,i=0;
	printf("Enter the number:");
	scanf("%d",&a);
	
	while(a>0){
		r=a%10;
		a=a/10;
		i++;
	}
	printf("The digit of a is:%d",i);
}
