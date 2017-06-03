#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int n) {
   int nr = 0;
   while(n > 0) {
      nr += n % 10;
      nr *= 10;
      n /= 10; 
   }

   return nr/10;
}

int ascend(int n) {
   int out = 0, a[10] = {0};
   while(n > 0) {
      a[n % 10] += 1;
      n /= 10;
   }

   for(int c = 9; c >= 0; c--) {
      if(a[c] == 0)
         continue;
      while(a[c] > 0) {
         out += c;
         out *= 10;
         a[c] -= 1;
      }
   }

   return out / 10;
}

int kapFlips(int n) {
   return ascend(n) - reverse(ascend(n));
}

int main(int argc, char* argv[]) {

   if(argc < 2 && strlen(argv[1]) != 4)
      exit(1);

   int c, n = atoi(argv[1]);

   if(n == 6174)
      printf("%d = %d iterations\n", atoi(argv[1]), 0);

   for(c = 1; (n = kapFlips(n)) != 6174; c++)
      ;
  
   printf("%d = %d iterations\n", atoi(argv[1]), c);

}
