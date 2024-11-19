#include<stdio.h>
void main(){
	int a,i=1,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);

	while(i<a){
		if(a%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==a){
		printf("%d is perfect number",a);
	}
	else{
		printf("%d is not perfect number",a);
	}
}



