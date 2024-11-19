#include<stdio.h>
int swap(int *a,int *b);
int main(){
	int a,b,temp;
	printf("Before: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After : %d %d",a,b);
}
int swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
