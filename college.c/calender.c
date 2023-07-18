#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //--------------TAKING INPUT FROM USER ,THE YEAR USER WANT TO REFER IN CALENDAR------------
    int n, count = 0;
    printf("----------------------------------ENTER THE YEAR FOR WHICH YOU NEED A CALENDAR TO BE REFERRED---------------------------------\n");
    scanf("%d", &n);

    //------------INITIALIZING THE NAME OF MONTHS AND NUMBE OF DAYS THEY CONTAIN----------
    system("Color 3F");
    char *str[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December", "\0"};
    int b[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //---------------CHECKING IF YEAR IS LEAP YEAR OR NOT---------------------
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        b[1] = 29;
    }

    //-------------PRINTING FORMAT OF CALENDAR----------
    for (int i = 0; i < 12; i++)
    {
    printf("\n\n-------------------------%s-------------------------------\n\n", str[i]);
    printf("\nSun\tMon\tTue\tWed\tThur\tFri\tSat\n");
    
    //----------------------PRINTING THE DAYS --------------------------
    for (int j = 0; j < b[i]; j++)
    {
    ++count;
    printf("%d\t", j + 1);

    //-----------------CHANGING THE LINE WHEN DAY REACHES 7-------------
    if (count > 6)
    {
    printf("\n");
     count = 0;
    }
    }
    }
}
