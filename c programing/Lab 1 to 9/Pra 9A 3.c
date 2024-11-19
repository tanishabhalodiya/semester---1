#include<stdio.h>
void main(){
	int x,y,i=0,a=1;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	while(i<y){
		a=a*x;
		i++;
	} 
	printf("x^y=%d",a);
}
