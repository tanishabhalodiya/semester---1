#include<stdio.h>
void main(){
	int a,b,c,ans;
	printf("press + for addition,- for subtraction,* for multiplication, / for division:" );
	scanf(" %c" ,&c);
	printf("enter the number a:");
	scanf("%d" ,&a);
	printf("enter the number b:");
	scanf("%d" ,&b);
	if(c=='+'){
		ans=a+b;
		printf("the ans is:%d",ans);
	}else if(c=='-'){
		ans=a-b;
		printf("the ans is:%d",ans);
	}else if(c=='*'){
		ans=a*b;
		printf("the ans is:%d",ans);
	}else if(c=='/'){
		if(b==0){
			printf("invalid number");
		}else{
		ans=a/b;
		printf("the ans is:%d",ans);
		}
		
	}
	else{
		printf("invalid operator\n");
	}
	
}
