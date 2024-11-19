#include<stdio.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct emp{
	char name[100];
	struct date bd;
	struct date jd;
};
void main(){
	struct emp e1;
	printf("Enter employ name: ");
	scanf("%s",e1.name);
	printf("Enter birth date: ");
	scanf("%d %d %d",&e1.bd.dd,&e1.bd.mm,&e1.bd.yy);
	printf("Enter joining date: ");
	scanf("%d %d %d",&e1.jd.dd,&e1.jd.mm,&e1.jd.yy);
	
	printf("Employ name is: %s\n",e1.name);
	printf("Employ birth date is:%d - %d - %d\n",e1.bd.dd,e1.bd.mm,e1.bd.yy);
	printf("Employ joining date is:%d - %d - %d\n",e1.jd.dd,e1.jd.mm,e1.jd.yy);
}
