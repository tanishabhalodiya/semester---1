#include<stdio.h>
// second large number from three number //
void main(){
	int a,b,c;
	printf("Enter the number a:");
	scanf("%d" ,&a);
	printf("Enter the number b:");
	scanf("%d" ,&b);
	printf("Enter the number c:");
	scanf("%d" ,&c);
	
	if(a>b){
		if(a>c){
			if(b>c){
			printf("b is second largest number:%d",b);
		}
		}else{
			printf("a is second largest number:%d",a);
			}
}
	else{
		if(b>c){
			if(a>c){
			printf("a is second largest number:%d",a);
		}
			else{
				printf("c is second largest number:%d",c);
			}
		}else{
			printf("b is second largest number:%d",b);
			
		}
		
		}
		
	}


