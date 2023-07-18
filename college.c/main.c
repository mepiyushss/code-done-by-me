#include<stdio.h>
#include<stdlib.h>

int main()
{
    char line[100];
    scanf("%[^\n]*s",line);
    //  either you can use this  ------>  gets(line);
    printf("hello world\n");
    printf("%s",line);
}