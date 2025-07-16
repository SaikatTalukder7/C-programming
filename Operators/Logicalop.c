#include <stdio.h>

int main()
{
   int a = 5;
   int b = 10;
   int c = 0;

   if (a < b && b > 0)
   {
      printf("Both conditions are true (AND operation)\n");
   }

   if (a < b || b < 0)
   {
      printf("At least one condition is true (OR operation)\n");
   }

   if (!c)
   {
      printf("Condition is false, but NOT makes it true (NOT operation)\n");
   }

   return 0;
}