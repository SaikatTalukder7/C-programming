#include<stdio.h>
void swapping(int a, int b)
{
    int temp;
    temp= a;
    a=b;
    b=temp;
    printf("after swapping: a= %d, b = %d\n", a,b);
}
int main()
{
    int a = 5, b = 10;
    printf("before swapping: a = %d, b = %d\n", a,b);
    swapping(a,b);
}
