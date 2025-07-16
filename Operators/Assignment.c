#include <stdio.h>

int main()
{
   int a = 5;
   int b = 10;
   int digit;

   a += 3;
   printf("After addition assignment, a = %d\n", a);

   b -= 4;
   printf("After subtraction assignment, b = %d\n", b);

   digit = 2;
   digit *= a;
   printf("After multiplication assignment, digit = %d\n", digit);
   digit /= b;
   printf("After division assignment, digit = %d\n", digit);

   digit %= a;
   printf("After modulus assignment, digit = %d\n", digit);

   return 0;
}
