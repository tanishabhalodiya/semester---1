#include<stdio.h>
void main(){
	int n,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("num[%d]:",i);
		scanf("%d",&num[i]);
	
		}


	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]<num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0;i<2;i++){
		printf("%d ",num[i]);
	}
			
		}	
	
