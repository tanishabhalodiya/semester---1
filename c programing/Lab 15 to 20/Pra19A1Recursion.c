#include<stdio.h>
int fact(int a);
void main(){
	int a,i;
	printf("Enter a number:");
	scanf("%d",&a);
	int res=fact(a);
	printf("Factorial:%d",res);
}

int fact(int a){
	if(a==1){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}
