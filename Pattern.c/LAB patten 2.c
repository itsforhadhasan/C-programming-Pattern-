#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value = ");
    scanf("%d",&n);

    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            printf("%c ",row+64);
        }

        printf("\n");
    }


}
