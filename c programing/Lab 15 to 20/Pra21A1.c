#include<stdio.h>
void main(){
	FILE *f;
	f=open("hello.txt","r");
	if(f){
		printf("File found.");
	}
	else{
		printf("File is not found.");
	}
	fclose(f);
}
