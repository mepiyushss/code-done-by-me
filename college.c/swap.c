#include <stdio.h>
#include <conio.h>
void swap(int *,int *);
void main()
{
int a,b;
printf(“enter two numbers”);
scanf(“%d%d”,&a,&b);
swap(&a,&b);
getch();
}
void swap(int * x,int * y)
{
int *z;
*z=*x;
*x=*y;
*y=*z;
printf(“%d%d”,*x,*y);
}