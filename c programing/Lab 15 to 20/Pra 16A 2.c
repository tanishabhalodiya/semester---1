#include<stdio.h>
void main(){
	int i,zero=0,pos=0,neg=0,j;
	int a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		if(a[i][j]==0){
			zero++;
		}
		else if(a[i][j]>0){
			pos++;
		}
		else{
			neg++;
		}
}
}
		printf("The number of zero elements in array is: %d\n",zero);
		printf("The number of positive elements in array is: %d\n",pos);
		printf("The number of negative elements in array is: %d\n",neg);
}
