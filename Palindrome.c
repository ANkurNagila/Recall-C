#include<stdio.h>
#include<string.h>
 
main()
{
	char s1[100],s2[100];
	int x;
	
	scanf("%s",&s1);
 
	strcpy(s2,s1);
    char t;
	for(int i=1;i<strlen(s1)/2;i++)
	{
		t=s2[i];
        s2[i]=s2[strlen(s2)-i-1];
        s2[strlen(s2)-i-1]=t;
	}
 
	if (strcmp(s1,s2)==0)
	{
		printf("YES");
    //	printf("%s,%s\t",s1,s2);
	}
	else
	{
		printf("NO");
	 //  printf("%s,%s\t",s1,s2);
	}
}
