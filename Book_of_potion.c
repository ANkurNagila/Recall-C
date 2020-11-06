#include <stdio.h>

int main()
{
	long long int num;
	scanf("%d", &num);              	
	
	int i=10,res=0;
	while(num>0)
	{
		res=res+i*(num%10);
		num=num/10;
		i--;
	} 
	
	if(res%11==0)
	{
		printf("Legal ISBN");
	}
	else
	{
		printf("Illegal ISBN");
	}
}


