// // // // // // #include <stdio.h>
// // // // // // #include <string.h>
// // // // // // #include <math.h>
// // // // // // #include <stdlib.h>

// // // // // // int main()
// // // // // // {
// // // // // //     float a,b;
// // // // // //     int c,d;
// // // // // //     scanf("%d",&c);
// // // // // //     scanf("%d",&d);
// // // // // // 	scanf("%f",&a);
// // // // // //     scanf("%f",&b);
// // // // // //     printf("%d  ",c+d);
// // // // // //     printf("%d\n",c-d);
// // // // // //     printf("%10.1f  ",a+b);
// // // // // //     printf("%10.1f",a-b);
// // // // // //     return 0;
// // // // // // }

// // // // // #include <stdio.h>
// // // // // #include <string.h>
// // // // // #include <math.h>
// // // // // #include <stdlib.h>

// // // // // int main() {


// // // // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // // // //     char n[100];
// // // // //     int i,a[10],j,flag=0;  
// // // // //     scanf("%s",n);
// // // // //     char *s=n;
    
    
// // // // //     for(i=0;i<10;i++) 
// // // // //     {
// // // // //         for(j=0;j<sizeof(n);j++)
// // // // //         {
// // // // //             if(s[j]==i)
// // // // //             flag=flag+1;
// // // // //         }
// // // // //         a[i]=flag;
// // // // //         flag=0;
// // // // //     }
// // // // //     for(i=0;i<10;i++)
// // // // //     printf("%d ",a[i]);
    
// // // // //     return 0;
// // // // // }

// // // // #include <stdio.h>
// // // // #include <string.h>
// // // // #include <math.h>
// // // // #include <stdlib.h>

// // // // int main() {

// // // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
// // // //     int i, n,sum=0;
// // // //     scanf("%d",&n);
// // // //     int a[n];
// // // //     for(i=0;i<n;i++)
// // // //     {
// // // //         scanf("%d",&a[i]);
// // // //     }  
// // // //     for (i=0;i<n;i++)
// // // //     {
// // // //         sum=sum+a[i];
// // // //     }
// // // //     printf("%d",sum);
// // // //     return 0;
// // // // }
// // // // \

// // // // #include <stdio.h>
// // // // #include <stdlib.h>

// // // // int main()
// // // // {
// // // //     int num, *arr, i;
// // // //     scanf("%d", &num);
// // // //     arr = (int*) malloc(num * sizeof(int));
// // // //     for(i = 0; i < num; i++) {
// // // //         scanf("%d", arr + i);
// // // //     }


// // // //     /* Write the logic to reverse the array. */
    

// // // //     for(i = num-1; i >=0; i--)
// // // //         printf("%d ", *(arr + i));
// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // #include <string.h>
// // // #include <math.h>
// // // #include <stdlib.h>



// // // int main() 
// // // {
// // //     int a, b,i;
// // //     scanf("%d\n%d", &a, &b);
// // //   	// Complete the code.
// // //       char *str[]={"one","two","three","four","five","six","seven","eight","nine"};
// // //       for(i=a;i<10;i++)
// // //      {
// // //           if(i>1 && i<10)
// // //       {
// // //           printf("%s\n",str[i-1]);
// // //       }
// // //       else
// // //        {
// // //       break;
// // //       }
// // //      }
// // //       for(i=10;i<=b;i++)
// // //       {
// // //           if(i%2==0)
// // //           printf("even\n");
// // //           else {
// // //           printf("odd\n");
// // //           }
// // //       }

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // #include <string.h>
// // // #include <math.h>
// // // #include <stdlib.h>

// // // int main() {

// // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // //     int a[10],flag=0,pos;
// // //     for (int i=0;i<10;i++)
// // //     {
// // //         scanf("%d",&a[i]);
// // //     }
// // //     for(int i=0;i<10;i++)
// // //     {
// // //         pos=i;
// // //         for(int j=0;j<10;j++)
// // //         {
// // //             if(a[i]==a[j])
// // //                 flag=flag+1;
            
            
            
// // //         }
// // //         if(flag==1)
// // //             printf("%d",a[pos]);
// // //         flag=0;
        
// // //     }
// // //     return 0;
// // // }




// // // #include <stdio.h>
// // // #include <string.h>
// // // #include <math.h>
// // // #include <stdlib.h>

// // // int main() {

// // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // //     int a[100],flag=0,pos,i,j;
// // //     for (i=0;i<10;i++)
// // //     {
// // //         scanf("%d",&a[i]);
// // //     }
// // //     for(i=0;i<10;i++)
// // //     {
// // //         pos=i;
// // //         for(j=0;j<10;j++)
// // //         {
// // //             if(a[i]==a[j])
// // //                 flag=flag+1;
// // //         }
// // //         if(flag==1)
// // //             printf("%d",a[pos]);
// // //      flag=0;
        
        
// // //     }
    
// // // }


// // #include <stdio.h>
// // #include <string.h>
// // #include <math.h>
// // #include <stdlib.h>

// // int main() {

// //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// //     int a[100],flag=0,pos,i,j;
// //     for (i=0;i<10;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     for(i=0;i<10;i++)
// //     {
        
// //         for(j=0;j<10;j++)
// //         {
// //             if(a[i]==a[j])
// //             {
// //                 flag=flag+1;
// //             }
// //             pos=i;
        
// //         }
// //         if(flag==1)
// //             printf("%d",a[pos]);
// //      flag=0;
        
        
// //     }
    
// // }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int i,n;
//     long long int p=1;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//     {
//         p=p*i;
//     }
//     printf("%lld",p);
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n;
    long long int p=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        p=p*i;
    }

   int a[1000],b,k=0;
    while(p>0)
    {
        b=p%10;
        a[k]=b;
        k=k+1;
        p=p/10;
        
    }
    for(i=k-1;i>=0;i--)
        printf("%d",a[i]);
    return 0;
}
