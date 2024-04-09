// cube of each elements of an 1D array using pointer in udf.
#include <stdio.h>

void cube(int num)
{
   printf("%d ", num * num * num);
}

int main(void)
{
   int num[3][4] = {
      {1, 2, 3, 4},
      {5,6,7,8},
      {9, 10, 11, 12}
   };
   
   int i, j;
   int *ptr = &num[0][0];


   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         cube(*(ptr + i * 4 + j));
      }
   }

   return 0;
}
