#include <stdio.h>
int main()
{
    double a, b;
    char c;
    double d;
    scanf("%lf%s%lf", &a, &c, &b);
    switch (c)
    {
    case '-':
        d = a - b;
        printf("%.2lf", d);
        break;
    case '+':
        d = a + b;
        printf("%.2lf", d);
        break;
    case '*':
        d = a * b;
        printf("%.2lf", d);
        break;
    case '/':
        d = a / b;
        printf("%.2lf", d);
        break;
    }

    return 0;
}
