#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
   int n1, r;

   scanf("%d", &n1);

   r = n1 % 2;

   if (r == 0)
   {
      printf("Par\n");
   }
   else
   {
      printf("Ímpar\n");
   }
}