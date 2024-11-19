#include<stdio.h>
void main(){
	int i=1,n,O=0,E=0;
	printf("Enter last digit of series:");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==0){
			E=E+i;
			printf("-%d ",i);
		}
		else{
			O=O+i;
			printf("%+d ",i);
		}
		i++;
	}
	printf("=%d",O-E);
}
