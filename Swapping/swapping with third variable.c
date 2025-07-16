#include<stdio.h>
int main()
{
    int a = 1, b = 2, temp;
    printf("%d %d\n", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d", a,b);
}
