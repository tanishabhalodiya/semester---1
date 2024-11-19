#include<stdio.h>
#include<string.h>
int find(char ch,char a[]);
void main(){
	int i;
	char a[100],ch;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	int res=find(ch,a);
	printf("%d",res);	
}

int find(char ch,char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==ch){
			return i;
		}
	}
}
