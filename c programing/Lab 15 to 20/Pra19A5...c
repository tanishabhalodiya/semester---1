#include<stdio.h>
#include<string.h>
void replace(char *a,char ch,char ch1){
	int i;
	for(i=0;a[i]!='\0';i++)
{
	if(a[i]==ch){
	
	a[i]=ch1;
}
}
}

int main(){
	char a[100]="Hallo";
	char ch='a';
	char ch1='e';
	
	replace(a,ch,ch1);
	printf("Modified string is:%s\n",a);
	
	return 0;
}
