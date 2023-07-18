// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     int i,j,count;
//     for (i=0; i<10; i++) {
//         count=0;
//     for (j=0; j<strlen(s);j++) {
//     if(i+48==s[j])
//     {
//         count=count+1;
//     }
//     }
//     printf("%d\t",count);

//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]",sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}



