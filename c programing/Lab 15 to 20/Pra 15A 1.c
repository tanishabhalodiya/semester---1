#include<stdio.h>
void main(){
	int i,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
		printf("%d",b[i]);
	}

	}

