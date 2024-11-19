#include<stdio.h>
void main(){
	int a,i=1,f;
	printf("Enter the number:");
	scanf("%d",&a);
	
	while(i<=a){
		f=f*i;
		i++;
	}
	printf("%d",f);
}
