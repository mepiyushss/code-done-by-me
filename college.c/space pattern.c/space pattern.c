#include<stdio.h>
#include<conio.h>
void intersection(int a[3],int b[3],int n,int m);
void main()
{
int a[3],b[3],i,n,m;
clrscr();
printf("ENTER THE  SIZE OF SET A\n");
scanf("%d",&n);
a[n];
printf("ENTER THE SIZE OF SET B\n");
scanf("%d",&m);
b[m];
printf("ENTER THE ELEMENTS OF SET A\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENTS OF SET B\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("SET A IS\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n\nSET B IS\n");
for(i=0;i<m;i++)
{
printf("%d\t",b[i]);
}
intersection(a,b,n,m);
}

void intersection(int a[3],int b[3],int n,int m)
{
a[n];
b[m];
int i,j,k=0;
printf("\n\nINTERSECTION OF SET A AND B IS \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
k=k+1;
printf("%d\t",a[i]);
break;
}

}
}
if(k==0)
printf("NO ELEMENT IS COMMON");
}