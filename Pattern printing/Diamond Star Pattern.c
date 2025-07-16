#include<stdio.h>
int main()    // DIAMOND with 9 rows
{
    int i,j,k=0,x;
    for (i=1; i<=9; i++)
    {
        i<=5? k++: k--;  // peak at row 5
        x=1;
      for (j=1; j<=9; j++)
        {
            if(j>=6 - k && j<=4 + k&&x)
            {
                printf("*");
                x = 0;
            }
            else {
                printf(" ");
                x = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
