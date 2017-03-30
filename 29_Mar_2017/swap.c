#include <stdio.h>

void swap(int a[], int size) {
   for(int c = 0; c < size - 1; c++) {
      if(a[c] > a[c + 1]) {
         a[c]     ^= a[c + 1];
         a[c + 1] ^= a[c];
         a[c]     ^= a[c + 1];
      }
   }
}

void printArray(int a[], int size) {

   for(int n = 0; n < 6; n++) {
      printf("%d ", a[n]);
   }

   printf("\n");
}

int main(void) {
   int a[] = {1,4,3,2,6,5}; 

   printArray(a,6);
   swap(a,6);
   printArray(a,6);

}
