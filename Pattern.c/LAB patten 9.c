#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value = ");
    scanf("%d",&n);

    for(int row=n; row>=1; row--)
    {
        for(int col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(int col=1; col<=row; col++)
        {
            printf("%d ",col);
        }

        printf("\n");



    }
}

