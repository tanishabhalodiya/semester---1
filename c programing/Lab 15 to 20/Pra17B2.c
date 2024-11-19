#include<stdio.h>
  void main(){
	int n,i,*p;
  	printf("Enter the value of n: ");
  	scanf("%d",&n);
  	int a[n],b[n];
  	for(i=0;i<n;i++){
  		printf("a[%d]:",i);
  		scanf("%d",&a[i]);
  		
	  }
	  for(i=0;i<n;i++){
  		printf("b[%d]:",i);
  		scanf("%d",&b[i]);
  		
	  }
	  
	  p=&a[i];
	  a[i]=&b[i];
	  b[i]=p;
	  
	  for(i=0;i<n;i++){
	  	printf("a[%d]:%d \n",i,a[i]);
	  
	  } 
	   
	  for(i=0;i<n;i++){
	  	printf("b[%d]:%d \n",i,b[i]);
	  
	  } 
	   
  }

