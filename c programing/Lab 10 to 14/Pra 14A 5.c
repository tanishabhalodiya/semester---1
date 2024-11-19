#include<stdio.h>
void main(){
	int i,j,height[5],weight[5],h=0,w=0;
	printf("Enter the height of five person.\n");

	for(i=0;i<5;i++){
		printf("height[%d]:",i);
		scanf("%d",&height[i]);
		if(height[i]>170){
			h++;
		}
	}
	printf("Enter the weight of five person.\n");
	for(j=0;j<5;j++){
		printf("Weight[%d]:",j);
		scanf("%d",&weight[j]);
		
		if(weight[i]<50){
			w++;
		}
	}
	printf("number of person having height more than 170 cm:%d\n",h);
		printf("number of person having weight less than 50 kg:%d\n",w);
}
