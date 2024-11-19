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
	  p=&a;
	  for(i=0;i<n;i++){
	  	printf("b[%d]: %d \n",i,*(p+i));	
	  }
	 
	  
  }

