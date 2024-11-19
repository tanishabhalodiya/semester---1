#include<stdio.h>
void main(){
	int x,y,a,sum=0;
	
	printf("Enter the number x and y:");
	scanf("%d %d",&x,&y);
	
	for(a=0;a<=y;a++){
		sum=x+x;
	}
	printf("The answer of x^y is %d",sum);
}
