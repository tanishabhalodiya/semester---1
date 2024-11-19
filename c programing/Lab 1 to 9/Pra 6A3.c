#include<stdio.h>
void main(){
	char c;
	
	printf("Enter the character:");
	scanf("%c" ,&c);
	
	if( c>='A' && c<='Z'){
		printf(*"The character is upper case.\n");
	}
	else if( c>='a' && c<='z'){
		printf(*"The character is lawer case.\n");
	}
	else if( c>='0' && c<='9'){
		printf(*"The character is digit.\n");
	}
	else{
		printf("The character is special character.\n");
	}
}
