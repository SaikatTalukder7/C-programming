#include <stdio.h>
void swapping (int *a, int *b)
{int temp;
temp= *a;
 *a = *b;
 *b = temp;
 }
int main()
{
 int a = 10, b = 5;
 printf("Before swapping :  a = %d, b = %d\n", a,b);
 swapping(&a, &b);
 printf("After swapping : a = %d, b=  %d\n", a,b);

}
