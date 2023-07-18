#include <stdio.h>

int main()
{
    int m[13], a = 0, b = 1,c;
    m[0] = 0;
    m[1] = 1;
    for (int i = 2; i < 13; i++)
    {
        c = a + b;
        m[i]=c;
        a = b;
        b = c;
    }
    for (int i = 0; i < 13; i++)
    {
        printf("%d\n",m[i]);
    }
    
}