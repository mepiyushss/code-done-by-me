#include<stdio.h>

int multiply(int *x,int *y)
{
    int p=*x * *y;
    return p;

}
int mod(int *x,int *y)
{
    if(*x>*y)
    return *x%*y;
    else
    return *y%*x;
}
void main()
{
    int a,b;
    
    printf("enter two numbers a and b\n");
    scanf("\n%d%d",&a,&b);
    
    int m1=multiply(&a,&b);
    printf("multiplication of two number is %d \n",m1);
    
    int m2=mod(&a,&b);
    printf("mod of greater number is %d \n",m2);
    
}