#include<stdio.h>
int main()  
{
    int i,j,k;

    for (i=1; i<=11; i++)
    {
        k = (i<=6) ? i-1 : 11-i;

        for (j=1; j<=11; j++)
        {
            if (j==6 - k || j==6 + k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
