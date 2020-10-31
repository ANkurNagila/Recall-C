#include<stdio.h>
#include<math.h>

int main()
{
    int N,t;
    scanf("%d",&N);
    
    int A[N],i;
    int result=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    
    
//----------------------First Half--------------------------------//
    
    
    for(int i=0;i<N;i++){
        if(i<N/2)
        {
        t=first(A[i]);
        if(i%2==0)
        result=result+t;
        else
        result=result-t;
        }
    
//-------------------------Second Half---------------------------//
        else{
        if(i%2==0)
        result=result+A[i]%10;
        else
        result=result-A[i]%10;
        }
    }       
//---------------------------Output----------------------------//
       
    if(result%11==0)
    {
        printf("OUI");
    }
    else
    {
        printf("NON");
    }
}


int first(int N)
{
    int t;
   while(N!=0)
   {
      t=N%10;
      N=N/10;
   }
   return t;
}
