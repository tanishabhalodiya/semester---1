#include<stdio.h>
void main(){
	int i,n,d,temp=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
			
	}
	printf("Enter the digit you want to search: ");
	scanf("%d",&d);
	for(i=0;i<n;i++){
		if(a[i]==d){
			temp=1;
			break;
		}
	
		}
		if(temp==1){
			printf("The index of number is:%d",i);
		}
		else{
			printf("Not found");
		}
		
}
	

