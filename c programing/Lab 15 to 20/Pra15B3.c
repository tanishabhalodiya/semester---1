#include<stdio.h>
void main(){
	int i,n,temp;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n],j=n-1;
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
		j--;
	}
	for(i=0;i<n;i++){
	
	printf("a[%d] : %d \n",i,a[i]);
}
	
}
