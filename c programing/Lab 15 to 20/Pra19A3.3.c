#include<stdio.h>
#include<string.h>
void main(){
	int l;
	char a[100],b[100];
	printf("Enter two strings: ");
	gets(a);
	gets(b);
	int res=strcpy(a,b);
	printf("String a is:%s",a);
}
