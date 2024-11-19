#include<stdio.h>
float max(float,float,float);
int main(){
	float a,b,c;
	printf("Enter the three number a,b and c: ");
	scanf("%f %f %f",&a,&b,&c);
	float m=max(a,b,c);
	printf("Maximum is :%f",m);
}
float max(float a,float b,float c){
	float m;
	if(a>b){
		if(a>c){
			m=a;
			return m;
		}
		else{
			m=c;
			return m;
		}
	
	}
	else{
		if(b>c){
			m=b;
			return m;
		}
		else{
			m=c;
			return m;
		}
	}
	
	
}
