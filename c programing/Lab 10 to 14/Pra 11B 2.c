#include<stdio.h>
void main(){
	int frq[10]={0},n,rem,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n!=0){
		rem=n%10;
		frq[rem]++;
		n=n/10;
	}
	for(i=0;i<10;i++){
		printf("frq=%d\n",frq[i]);
	}
}
