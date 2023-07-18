#include <stdio.h>
int n=5;
int printpattern(int n) {
   if(n>0) {
      printpattern(n-1);
      printf("*");
   }
}