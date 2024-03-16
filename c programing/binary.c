#include<stdio.h>
int bin(int);
void main(){
	int n,bin;
	printf("Enter number : ");
	scanf("%d",&n);
	bin=dtob(n);
	
	printf("The binnary of decimal is:%d",bin);
	
}

int dtob(int n){
	if(n==0){
		return 0;
	}	
	else{
		return (n%2 + 10*dtob(n/2));
	}
}
