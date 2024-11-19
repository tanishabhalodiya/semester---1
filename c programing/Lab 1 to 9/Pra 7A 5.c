#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the number:");
	scanf("%d" ,&a);
	
	b=(a%2==0)?(printf("Number is even.")):(printf("Number is odd."));
	
	scanf("%d" ,&b);
}
