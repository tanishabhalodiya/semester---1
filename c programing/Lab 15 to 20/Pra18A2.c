#include<stdio.h>
void max(int a,int b);
void min(int a,int b);
void main(){
	int a,b;
	printf("Enter the two number a and b: ");
	scanf("%d %d",&a,&b);
	max(a,b);
	min(a,b);
}
void max(int a,int b){
	if(a>b){
		printf("Maximum is:%d\n",a);
	}
	else{
		printf("Maximum is:%d\n",b);
	}
}

void min(int a,int b){
	if(a>b){
		printf("Minimum is:%d\n",b);
	}
	else{
		printf("Minimum is:%d\n",a);
	}
}

	

