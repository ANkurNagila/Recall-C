#include <stdio.h>

int pos(int f,int A[],int N)
{
    for(int i=0;i<N;i++)
    {
        if(f==A[i])
        {
            return i;
        }
    }
}

int main()
{
	int N,Q;
	scanf("%d%d", &N,&Q);
	
	int A[N];
	int f,l,res,first,last;

	for(int i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}             
	
	while(Q>0)
	{
		scanf("%d%d",&f,&l);
		
		first=pos(f,A,N);
		last=pos(l,A,N);
		
		res=(first+last)/2;
		
		printf("%d",A[res]);
		Q--;
	
	}
}


