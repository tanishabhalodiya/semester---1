#include<stdio.h>
void main(){
	
	int i,j,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]!=a[j]){
				
			printf("%d ",a[i]);	
			break;
			
			}
			
		}
	
	}

}

