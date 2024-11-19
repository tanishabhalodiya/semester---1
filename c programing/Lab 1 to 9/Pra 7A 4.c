#include<stdio.h>
void main(){
	int a,b,c,max;
	printf("Enter a , b and c:");
	scanf("%d %d %d" ,&a ,&b ,&c);
	
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	printf("Largest number is:%d",max);
}
