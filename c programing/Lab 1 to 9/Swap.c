#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a and b are:%d %d",a,b);
}