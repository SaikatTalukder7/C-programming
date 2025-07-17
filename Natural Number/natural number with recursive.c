#include<stdio.h>
void natural (int);

int main()
{
    int n;
    scanf("%d", &n);
    natural (n);
    return 0;
    
}

void natural(int num)
{
    if(num)
        natural(num-1);
    else
    return;
    printf("%d\n", num);
}
