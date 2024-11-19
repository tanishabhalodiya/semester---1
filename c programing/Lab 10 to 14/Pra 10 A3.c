#include<stdio.h>
void main(){
	int a,i=1,count=0;
	printf("Enter the number:");
	scanf("%d",&a);
	
	while(i<=a){
		if(a%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		printf("%d is prime number.",a);
	}
	else{
		printf("%d is not prime number.",a);
	}
}
