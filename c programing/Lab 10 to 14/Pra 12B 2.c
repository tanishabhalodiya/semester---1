#include<stdio.h>
void main(){
	int n,i,j;
	float fac=1.0,e=1.0;
	printf("Enter the last number of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			fac=fac*j;
		}
		e=e+(1/fac);
	}
	printf("The value of e is:%f",e);
}
