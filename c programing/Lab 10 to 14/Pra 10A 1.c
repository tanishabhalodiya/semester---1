#include<stdio.h>
void main(){
	int a,l,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&a);
	
	if(a>0){
		
		l=a%10;
	}
		while(a>10){
			r=a%10;
			a=a/10;
		}
		
	sum=l+a;
	printf("%d",sum);
	
}
