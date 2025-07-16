#include <stdio.h>

int main()
{
   int a = 5; 
   int b = 9; 
   int result;


   result = a & b; 
   printf("Bitwise AND of %d and %d is %d\n", a, b, result);

   
   result = a | b; 
   printf("Bitwise OR of %d and %d is %d\n", a, b, result);

  
   result = a ^ b; 
   printf("Bitwise XOR of %d and %d is %d\n", a, b, result);

   
   result = ~a; 
   printf("Bitwise NOT of %d is %d\n", a, result);


   result = a << 1; 
   printf("%d left shifted by 1 position is %d\n", a, result);

  
   result = b >> 1; 
   printf("%d right shifted by 1 position is %d\n", b, result);

   return 0;
}
