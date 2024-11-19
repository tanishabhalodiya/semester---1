#include<stdio.h>
void main(){
	int i,n;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int si=0,ei=n-1,temp;
	
	while(si<ei){
		temp=a[si];
		a[si]=a[ei];
		a[ei]=temp;
		si++;
	    ei--;
	}
	
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}


}
