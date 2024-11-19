#include<stdio.h>
void main(){
	int a;
	printf("Enter the number of month:");
	scanf("%d" ,&a);
	
	switch(a){
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The number of day in month is 30.");
			break;
		case 2:
			printf("The number of days in month is 28.");
			break;
		default:
			printf("The number of days in month is 31.");
			break;
	}
}
