#include<stdio.h>
void main(){
	char c;
	printf("Enter the alphabet:");
	scanf("%c" ,&c);
	if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
		printf("c is vowel");
	}
	else{
		printf("c is consonant");
	}
}
