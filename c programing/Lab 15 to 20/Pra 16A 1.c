#include<stdio.h>
void main(){
	int n,i,j,m;
	printf("Enter the size of both array:");
	scanf("%d %d",&m ,&n);
	
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		
			
		}
		
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	
}
}
