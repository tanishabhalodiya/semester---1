#include<stdio.h>
void main(){
	int i,j;
	int a[4][5],b[4][5];
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("Marks of roll no. %d is %d:\n",a[i][j],b[i][j]);
			
			}
		}
}
