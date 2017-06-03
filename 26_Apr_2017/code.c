#include <stdio.h>
#define LENGTH(x) (sizeof(x)/sizeof((x)[0]))

void printArray(int* a);
void printUnion(int* a, int* b);
void printIntersection(int* a, int* b);

int main() {

   int a[] = {1,3,5,7,9,11,15,20,22};
   int b[] = {1,3,5,15,19,55};

   printUnion(a,b);
   printIntersection(a,b);  
}

void printArray(int* a) {
   int size = LENGTH(a);
   for(int i = 0; i < size; a++, i++)
      printf("%d ", *a);
}

void printUnion(int* a, int* b) {
   int sizeA = LENGTH(a);
   int sizeB = LENGTH(b);
   
   for(int i = 0, j = 0; i < sizeA, j < sizeB; ;) {
         if(a[i] == b[j]) printf("%d ", a[i]);
      }
   }
}

void printIntersection(int* a, int* b) {

   int sizeA = LENGTH(a);
   int sizeB = LENGTH(b);
   
   for(int i = 0; i < sizeA; i++) {
      for(int j = 0; j < sizeB; j++) {
         if(a[i] != b[j]) printf("%d ", a[i]);
      }
   }
}
