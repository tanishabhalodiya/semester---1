#include<stdio.h>
void main(){
	int i=1,n,sum=0,c;
	printf("Enter the last digit of the series:");
	scanf("%d",&n);
	
	while(i<=n){
		c=i*i;
		i++;
		printf("%d + ",c);
		sum=sum+c;
	}
	printf("=%d",sum);
	
}
