#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int x=1,fact=1;
	while(x<=num)
	{
		fact=x*fact;
		x++;
	}
	              			
	printf("%d", fact);       
}
