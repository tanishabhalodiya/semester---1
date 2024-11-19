#include<stdio.h>
#include<string.h>
void main(){
	int l;
	char a[100];
	printf("Enter string: ");
	gets(a);
	l=strlen(a);
	printf("Length of string is:%d",l);
}
