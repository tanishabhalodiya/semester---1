#include<stdio.h>
int main(){
	int n,fdigit,ldigit,temp,swapn;
	printf("Enter the number:");
	scanf("%d",&n);
	 
	 ldigit=n%10;
	 int a=1;
	 while(n/a>9){
	 	a=a*10;
	 }
	 fdigit=n/a;
	 swapn=ldigit*a + (n%a)*10 - ldigit + fdigit;
	 
	 printf("the swapped number is:%d\n",swapn);
	 return 0;
}
