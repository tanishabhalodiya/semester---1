#include<stdio.h>
#include<string.h>
char replace(char ch,char a[],char ch1);
void main(){
	int i;
	char a[100],ch,ch1;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character: ");
	scanf("%c",&ch);
	printf("Enter a new character: ");
	scanf("%c",&ch1);
	char b=replace(ch,a,ch1);
	printf("Modified string is: %s",b);	
}

char replace(char a[],char ch,char ch1){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==ch){
			a[i]=ch1;
		}
	}
}
