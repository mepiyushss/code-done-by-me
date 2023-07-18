#include <stdio.h>
struct emp{
char name[20];
unsigned int salary;
char dep[20];
long long ph;
};
int main()
{
 struct emp e[100];
 int n;
 printf("Enter the number of the employee to be written:");
 scanf("%d",&n);
 for(register int i=0;i<n;i++)
 {
     printf("Enter the:\n1:Name\n2:Salary\n3:Department\n4:Phone number:\n");
     scanf("%s%d%s%lld",e[i].name,&e[i].salary,e[i].dep,&e[i].ph);
 }
 printf("The following are the names of the employees having salary less than 40,000\n");
 for(register int i=0;i<n;i++)
 {
     if(e[i].salary<40000)
        continue;
     else{
        printf("Name=%s   Phone number=%lld\n",e[i].name,e[i].ph);
     }
 }
 return 0;
}