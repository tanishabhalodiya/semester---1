#include<stdio.h>
#include<string.h>
void main(){
	int res;
	char a[100];
	printf("Enter two strings: ");
	gets(a);
	res=strlwr(a);
	printf("String a is:%s",a);
}
