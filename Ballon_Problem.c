#include <stdio.h>

int main(){
	int num;
	int T;
	int a,b,rate1,rate2;
	int result=0;
	scanf("%d",&T);
	while(T>0)
	{
		result=0;
		scanf("%d %d",&rate1,&rate2);
		scanf("%d", &num);

		for(int i=1;i<=num;i++)
		{
			scanf("%d%d",&a,&b);
			if(T%2==0)
			{
				result=result+a*rate1+b*rate2;
			}
			else
			{
				result=result+a*rate2+b*rate1;
			}
		
		}
		printf("%d\n",result);    
		T--;
    }
}


