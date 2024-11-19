#include<stdio.h>
void main(){
	int a,b;
	printf("Enter two number a and b for range:");
	scanf("%d %d",&a ,&b);
	
	while(a<=b){
		if(a%2==0){
			printf("%d\n",a);
		}
		a=a+1;
	}
}
