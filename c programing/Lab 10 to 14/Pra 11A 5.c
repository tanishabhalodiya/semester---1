#include<stdio.h>
void main(){
	int n,i,a=1;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		a=a*i;
	}
	printf("The factorial of given number is:%d",a);
}
