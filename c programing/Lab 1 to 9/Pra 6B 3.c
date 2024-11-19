#include<stdio.h>
void main(){
	
	int a,b,c;
	printf("Enter the side a:");
	scanf("%d" ,&a);
	printf("Enter the side b:");
	scanf("%d" ,&b);
	printf("Enter the side c:");
	scanf("%d" ,&c);
	
	if( a==b && a==c && b==c ){
		printf("The type is Equilateral Triangle.");
	}
	else if(a==b || a==c || b==c){
		printf("The type is Isosceles Triangle.");
	}
	else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf("The type is Right angled triangle.");
	}
	else if(a!=b && b!=c && c!=a){
		printf("The type is Scalene triangle.");
	}
}
