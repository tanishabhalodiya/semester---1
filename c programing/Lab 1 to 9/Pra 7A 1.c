#include<stdio.h>
void main(){
	int a;
		printf("Enter the number from 0 to 6:");
		scanf("%d" ,&a);
		
		switch(a){
			case 0:
				printf("Sunday");
				break;
			case 1:
				printf("Monday");
				break;
			case 2:
				printf("tuesday");
				break;
			case 3:
				printf("Wednesday");
				break;
			case 4:
				printf("Thursday");
				break;
			case 5:
				printf("Friday");
				break;
			case 6:
				printf("Saturday");
				break;
			defalt:
				printf("Invalid number");
				break;
		}
}
