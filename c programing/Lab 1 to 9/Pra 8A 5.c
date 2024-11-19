#include<stdio.h>
void main(){
	int a=1,o=0,e=0;
	
	while(a!=0){
		printf("Enter any numbers or enter 0 for exit:");
		scanf("%d",&a);
	
		if(a%2==0){
			e=e+1;
		}
		else{
			o=o+1;
		}
	
	}
	printf("Number of odd is:%d\n",o);
	printf("Number of even is:%d\n",e);
}
