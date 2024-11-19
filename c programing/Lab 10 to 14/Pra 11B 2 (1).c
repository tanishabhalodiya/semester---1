#include<stdio.h>
void main(){
	int n,a,i,count=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Enter frequency number:");
	scanf("%d",&a);
	
	for(i=0;n!=0;n=n/10){
		
		i=n%10;
		
		if(i==a){
			
			count++;
		}
	}
	printf("Frequency of given number is:%d",count);
}
