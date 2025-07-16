#include<stdio.h>
int main()    //DIAMOND
{   int i,j,k=0,x;

    for (i=1;i<=11;i++)
    {
        i<=6?k++:k--;
        x=1;
        for(j=1;j<=11;j++)
        {
            if(j>=7-k&&j<6+k&&x)
            {
                printf("*");
                x=0;
            }
            else{
                printf(" ");
                x=1;
            }

        }
    printf("\n");

    }
}
