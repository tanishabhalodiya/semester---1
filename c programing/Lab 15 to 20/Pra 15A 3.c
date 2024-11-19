#include<stdio.h>
void main(){
	int i,n,count=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
		
		if(a[i]%3==0){
			count++;
		}
	}
	printf("The number of elements divisible by 3 is:%d",count);
}
