#include<stdio.h>
int get(int i);
int main()
{
int a=1;
get(a);

}
int get(int i)
{
    // if(i<=100)
    // {
    //     printf("%d\n",i);
    //     i=i+1;   
    //     get(i);
    // }

    if(i<=10)
    {

    return 1+get(i++);
    
    }
    else
    return 1;
}