#include <stdio.h>

int main(){
	char A[100];
	int i=0;
	scanf("%s",&A);
	while(A[i]!=NULL)
	{
		if(65<=A[i] && A[i]<=90)
		{
			A[i]=A[i]-65+97;
		}
		else
		{
			A[i]=A[i]-97+65;
		}
		i++;
	}
	printf("%s",A);
}


