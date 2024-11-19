#include<stdio.h>
float interest(int p,int r,int n);
void main(){
	int p,r,n;
	printf("Enter principle value, rate of interest and number of years: ");
	scanf("%d %d %d",&p,&r,&n);
	float i=interest(p,r,n);
	printf("Interest is:%f",i);
}
float interest(int p,int r,int n){
	float i;
	i=(p*r*n)/100;
	return i;
}
