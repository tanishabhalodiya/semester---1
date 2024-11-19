#include<stdio.h>
#include<string.h>
void main(){
	int l;
	char a[100],b[100];
	printf("Enter two strings: ");
	gets(a);
	gets(b);
	int res=strcmp(a,b);
	if(res==0){
		printf("strings are same");
	}
	else if(res<0){
		printf("strings are less");
	}
	else{
		printf("Strings are great");
	}
	
}
