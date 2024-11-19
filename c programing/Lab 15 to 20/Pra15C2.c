#include<stdio.h>
void main(){
	int i,j,n,new;
	int a[100];
	printf("Enter a size of array:");
	scanf("%d",&n);
	printf("Enter sorted array\n");
	
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	printf("\nEnter new value:");
	scanf("%d",&new);
	
	for(i=0;i<n;i++){
		if(a[i]>new){
			for(j=i+1;j<n;j++){
				a[j+1]=a[j];
				printf("a[j] : %d\n",a[j]);
			}
			
			a[i]=new;
			
			
			
		}
		
	}
	for(i=0;i<=n;i++){
	printf("%d",a[i]);
		
	}

}
