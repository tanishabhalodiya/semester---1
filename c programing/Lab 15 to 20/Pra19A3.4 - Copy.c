#include<stdio.h>
#include<string.h>
void main(){
	int res;
	char a[100],b[100];
	printf("Enter two strings: ");

	gets(a);
	gets(b);
	res=strcat(a,b);
	printf("The string a is: %s",a);
}
