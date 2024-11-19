#include<stdio.h>
void main(){
	int a,flag=0,i=0;
	printf("Enter the number:");
	scanf("%d",&a);
	
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			flag=1;
			
		}
		
	}
	if(flag==1){
		printf("%d is not prime number",a);
	}
	else{
		printf("%d is prime number",a);
	}
}
