#include<stdio.h>
void naturalnumber (int n)
{
 for(int i=1; i<=n; i++)
 {
     printf("%d\n", i);
 }
}
int main()
{
    int n;
    scanf("%d",&n);
    naturalnumber(n);
    return 0;
}
