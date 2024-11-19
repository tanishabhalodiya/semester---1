#include<stdio.h>
void main(){
	int i,n,num[n];
	printf("Enter last digit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	
		printf("num[%d] : ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=n-1;i>=0;i--){
		printf("%d ",num[i]);
	}
}
