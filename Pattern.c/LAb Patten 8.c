#include<stdio.h>
int main()
{
      int i,j,n, a=1;
      printf("How Many Lines \nYou Want to Print: ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
            for(j=1;j<=i;j++)
            {
                  printf("%d  ",a);
                  a=a+2;
            }
            printf("\n");
      }
      return 0;
}
