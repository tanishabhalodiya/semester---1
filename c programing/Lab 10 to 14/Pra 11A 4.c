#include<stdio.h>
void main(){
	int x,y,i,a=1;
	printf("Enter x and y:");
	scanf("%d %d",&x ,&y);
	
	for(i=1;i<=y;i++){
		a=a*x;
	}
	printf("x^y is:%d",a);
}
