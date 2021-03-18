#include<stdio.h>
#include<conio.h>

int main(void)
{
    int N;
    printf(" :> ");
    scanf("%d",&N);
    printf("\n");

    for(int i=0;i<N;i++)
    {
        for(int j=1;j<=2*N-1;j++)
        {
            if(j>=N-i && j<=N+i)        // Actually it's like when condition is value should be >=N-i and <=N+i
            {
                printf("*");            //            *13
            }                           //      *22   *23   *24
            else                        // *31  *32   *33   *34   *35
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
