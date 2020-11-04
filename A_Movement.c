#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);  

	int count=0;            	
	
	while(num>0)
	{
		if(num>=5)
		{
			count++;
			num=num-5;
		}
		else if(num>=4)
		{
			count++;
			num=num-4;
		}
		else if(num>=3)
		{
			count++;
			num=num-3;
		}
		else if(num>=2)
		{
			count++;
			num=num-2;
		}
		else
		{
			count++;
			num=num-1;
		}
		//printf("%d:%d\t",num,count);
	}  
	printf("%d",count);  
}


