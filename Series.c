#include<stdio.h>
#include<math.h>

int main()
{
    int A,T,no,x;
    scanf("%d",&A);
      T=A;
    printf("3 number series for %d is :\n",A);
    while(T!=0)
    {
        x=3;
        no=0;
        while(x!=0)
        {
            if(T>1 && x>0)
            {
                no=no+(T%10)*pow(10,3-x);
            }
            if(x!=1)
            {
                    T=T/10;
            }
            x--;
        }
            printf("\t\t\t\t\t%d\n",no);
         
    }
}
