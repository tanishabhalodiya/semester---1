#include<stdio.h>
void main(){
	int a,r,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&a);
	int temp=a;
	
	while(a!=0){
		r=a%10;
		sum=sum*10+r;
		a=a/10;
	
	}
	
	if(temp==sum){
	
	printf("%d is palindrome number.",sum);
	}
	else{
		printf("%d is not palindrome number.",sum);
	}
}
