// // // // #include <stdio.h>
// // // // int main()
// // // // {
// // // //     char *str[] = {"IncludeHelp", "piyush", "ayush"};

// // // //     printf("%s\n", *&*str);
// // // //     return 0;
// // // // }
// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // // 	char *ptr;
// // // // 	char string[] = "learn C from 2braces.com";
// // // // 	ptr = string;
// // // // 	ptr += 6;
// // // // 	printf("%s",ptr);
// // // // 	printf("%s",string);
// // // // 	return 0;
// // // // }

// // // // #include <stdio.h>
// // // // #include <string.h>
// // // // #include <math.h>
// // // // #include <stdlib.h>

// // // // int main() {

// // // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // // //     int n,p=1;
// // // //     printf("Enter the number\n");
// // // //     scanf("%d",&n);
// // // //     for(int i=1;i<=n;i++)
// // // //     {
// // // //         p=p*i;
// // // //         }
// // // //     printf("%d",p);

// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // #include <string.h>
// // // #include <math.h>
// // // #include <stdlib.h>

// // // int main() {

// // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // //     int a[100],b[100],i;
// // //     b[0]=1;
// // //     b[1]=1;
// // //     int c=1;
// // //     int d=1;

// // //     for(i=0;i<100;i++)
// // //     {
// // //         scanf("%d",&a[i]);
// // //     }

// // //     for(i=2;i<100;i++)
// // //     {
// // //         b[i]=c+d;
// // //         c=d;
// // //         d=b[i];
// // //     }
// // //     for(i=0;i<100;i++)
// // //     {
// // //         printf("%d\n",b[i]);
// // //     }

// // //     return 0;
// // // }

// // #include <stdio.h>
// // #include <string.h>
// // #include <math.h>
// // #include <stdlib.h>

// // int main()
// // {

// // 	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // 	int a[100], b[100], i, j;
// // 	b[0] = 1;
// // 	b[1] = 1;
// // 	int c = 1;
// // 	int d = 1;

// // 	for (i = 0; i < 10; i++)
// // 	{
// // 		scanf("%d", &a[i]);
// // 	}

// // 	for (i = 2; i < 100; i++)
// // 	{
// // 		b[i] = c + d;
// // 		c = d;
// // 		d = b[i];
// // 	}
// // 	for (i = 0; i < 10; i++)
// // 	{
// // 		j = a[i];
// // 		printf("%d\n", b[j - 1]);
// // 	}

// // 	return 0;
// // }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int a[100], b[100], i, j,n;
//     b[0] = 0;
//     b[1] = 1;
//     int c = 0;
//     int d = 1;

//   scanf("%d",&n);
// for (i = 2; i < 100; i++)
//     {
//         b[i] = c + d;
//         c = d;
//         d = b[i];
//     }
//     printf("\n%d",b[n]);

//     return 0;

// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{

			printf("FizzBuzz\n");
		}

		else if (i % 5 == 0)
		{

			printf("Buzz\n");
		}

		else if (i % 3 == 0)
			printf("Fizz\n");

		else

			printf("%d\n", i);
	}

	return 0;
}
