#include<stdio.h>
void main(){
	int i,n,num[n],max,min,sum=0,avg=0;
	printf("Enter last digit:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("num[%d] : ",i);
		scanf("%d",&num[i]);
		sum=sum+num[i];
		
	}
	avg=sum/n;
	max=num[0];
	min=num[0];
	for(i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
		}
		if(num[i]<min){
			min=num[i];
		}
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	printf("The sum of numbers is:%d\n",sum);
	printf("The avg of numbers is:%d\n",avg);
	
}
