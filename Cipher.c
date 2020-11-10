#include <stdio.h>
#include<string.h>
int main(){
	int key;
	char S[100000];

	scanf("%s",&S);
	scanf("%d", &key); 
	int i=0;
	while(S[i]!=NULL)
	{
		if(S[i]>=65 && S[i]<=90)
		{
			if(key>26)
			{
				S[i]=S[i]+(key%26);
			}
			else
			{
				S[i]=S[i]+key;
			}

			if(S[i]>90)
			{
				S[i]=S[i]-26;
			}
		}

		else if(S[i]>=97 && S[i]<=122)
		{
			if(key>=26)
			{
				int x=S[i]+key%26;
				if(x>122)
				{
					x=x-26;
				}
				S[i]=x;
			}
			else
			{
				S[i]=S[i]+key;
			}

			
		}

		else if(S[i]>=48 && S[i]<=57)
		{
			if(key>10)
			{
				S[i]=S[i]+(key%10);
			}
			else
			{
				S[i]=S[i]+key;
			}

			if(S[i]>57)
			{
				S[i]=S[i]-10;
			}
		}

		else{
			S[i]=S[i];
		}
		i++;


	} 

	printf("%s",S);            	
    
}


