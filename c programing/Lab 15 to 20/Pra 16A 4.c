#include<stdio.h>
void main(){
	int i,m,n,j;
	printf("Enter the size of both array :");
	scanf("%d %d",&m,&n);
	
	int a[m][n],b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
}
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				printf("b[%d][%d]:",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		printf("The sum of both array is.....\n");
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j] + b[i][j]);
	}
	printf("\n");
}
}

			
