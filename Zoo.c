#include <stdio.h>

int main(){
	char A[20];
	scanf("%s",&A);
	int i=0,x=0,y=0;

	while(A[i]!=NULL)
	{
	//	printf("A[i]=%c\t",A[i]);
		if(A[i]==122)
		{
	//		printf("x");
			x++;
		}
		else
		{
	//		printf("y");
			y++;
		}
		i++;

	}
	//printf("%d %d",x,y);
	if(y==2*x)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}


}


