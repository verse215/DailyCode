#include <stdio.h>
#include <stdlib.h>

int* merge(int a[], int b[], int sizeOfBoth) {
   
   int* c = (int *)calloc(sizeOfBoth, sizeof(int));

   int count = 0;
   while(count < sizeOfBoth){
      c[count++] = *a++;
      c[count++] = *b++;
   }

   return c;
}

int main(void) {
   int a[] = {1,3,5,7,9};
   int b[] = {2,4,6,8,10};
   int size = sizeof(a)/sizeof(a[0]) + sizeof(b)/sizeof(b[0]);

   int* c = merge(a,b,size);

   for(int count = 0; count < size; count++) {
      printf("%d\n ", c[count]);
   }
}
