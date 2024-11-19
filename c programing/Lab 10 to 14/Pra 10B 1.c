#include<stdio.h>
void main(){
	int a,sum=0,i=1;
	printf("Enter the number:");
	scanf("%d",&a);
	
	while(i<a){
		if(a%i==0){
		sum=sum+i;
		}
		i++;
	}
	if(sum==a){
		printf("The %d is perfect number",a);
	}
	else{
		printf("The %d is not perfect number",a);
	}
}
