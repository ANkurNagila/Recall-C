#include <stdio.h>

int seat_number(int N)
{
	int x,y;
	if(N%6==N%12||N%6==0)
	{
	    x=N%6;
		if (N%6==0 && N%12==0)
		{
			y=-(2*(6-x-1)+1);
			return y+N;
		//	printf("%d Exception\n",x);
		}
		
		else if(N%6==0 && N%12!=0)
		{
		    return N+1;
		}
		y=2*(6-x)+1;
		//printf("%d\t",x);
	}
	else
	{
		x=N%6;
		y=-(2*(x)-1);
		//printf("else\t");
	}
	return y+N;
}

void position(int N)
{
	if(N%6==1||N%6==0)
	printf(" WS");
	if(N%6==2||N%6==5)
	printf(" MS");
	if(N%6==3||N%6==4)
	printf(" AS");	
}

int main(){
	int Test,Num;
	scanf("%d", &Test);   
	while(Test>0)
	{
		scanf("%d",&Num);
		int New=seat_number(Num);
		printf("%d",New);
		position(Num);
		Test--;
		printf("\n");

	}           	
	
	      
}


