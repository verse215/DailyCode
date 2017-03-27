#include <stdio.h>
#include <stdlib.h>

int fibSum(int n) {

   int x = 0, y = 1, z = 0, sum = 0;
   for(int c = 0; c < n; c++) {
      z = x + y;
      y = x;
      x = z;

      sum += (z % 2 == 0) ? z : 0;
   }

   return sum;
}

int main(int argc, char* argv[]) {
   int n = atoi(argv[1]);

   if(n > 10000) {
      printf("Not Today!!\n");
      exit(1);
   }

   printf("The sum of even fib numbers up to the %dth is: %d", n, fibSum(n));
}
