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
	int i,res=1;
	for(i=1;i<=a;i++){
		res=res*i;
	}
	return res;
}
