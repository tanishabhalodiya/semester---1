#include<stdio.h>
void main(){
	int a;
	printf("Enter the integer number:");
	scanf("%d" ,&a);
	
	if(a&1){
		printf("The last digit of given number is odd.");
		
	}
	else{
		printf("The last digit of given number is even.");
	}
}
