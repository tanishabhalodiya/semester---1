#include<stdio.h>
void main(){
	int a,b,c,D;
	float x,y;
	printf("Enter the coefficient of x^2:");
	scanf("%d" ,&a);
	
	printf("Enter the coefficient of x:");
	scanf("%d" ,&b);
	
	printf("Enter the coefficient of x^0:");
	scanf("%d" ,&c);
	
	D=((b^2) - (4*a*c));
	
	
	if(D==0){
		printf("Two same roots x:\n");
		x=(-b/2*a);
		printf("The roots is x:%f",x);
	}
	else if(D>0){
		printf("Two different roots are x and y:");
			x=((-b + (D)^1/2) /2*a);
			y=((-b - (D)^1/2) /2*a);
			
		printf("The roots are x and y respectively:%f %f" ,x,y);
	}
	else if(D<0){
		printf("The roots are imaginary.");
	}
}
