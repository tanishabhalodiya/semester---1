#include<stdio.h>
void main(){
	int a1,a2,a3,a4,a5;
	float per;
	printf("Enter the marks of a1 subject:");
	scanf("%d" ,&a1);
	printf("Enter the marks of a2 subject:");
	scanf("%d" ,&a2);
	printf("Enter the marks of a3 subject:");
	scanf("%d" ,&a3);
	printf("Enter the marks of a4 subject:");
	scanf("%d" ,&a4);
	printf("Enter the marks of a5 subject:");
	scanf("%d" ,&a5);
	
	per=(a1+a2+a3+a4+a5)/5;
	printf("The percentage is:%f",per);
	if(per<=35){
		printf("Unfortunatly fail.\n");
	}
	else if(per>=36 && per<=45){
		printf("Pass...\n");
	}
	else if(per>=46 && per<=60){
		printf("Second class..\n");
	}
	else if(per>=61 && per<=70){
		printf("First class..\n");
	}
}	
