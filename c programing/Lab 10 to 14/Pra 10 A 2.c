#include<stdio.h>
void main(){
	int a=1,sum=0,i=-1;
	float avg;
	
	
	while(a>0){
		printf("enter the numbers as many as you want and press 0 for exit:");
		scanf("%d",&a);
		
		sum=sum+a;
		i++;
		
		
	}
	avg=sum/i;
	printf("\nthe sum and average of numbers is:%d %f",sum,avg);
}
