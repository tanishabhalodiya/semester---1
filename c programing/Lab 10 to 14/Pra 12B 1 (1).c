#include<stdio.h>
void main(){
	int a,sum=0,n,i;
	printf("Enter last number of series:");
	scanf("%d",&n);
	for(a=1;a<=n;a++){
	
			printf("(");
		for(i=1;i<=a;i++){
			
			printf("%d+ ",i);
			
			sum=sum+i;	
				
			}
			
			printf(")");
			printf("+");
		}

	
	printf("\nSum of this series:%d",sum);
}
