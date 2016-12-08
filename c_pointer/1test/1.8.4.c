#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

main()
{
		char s[MAX];
		char sp[MAX];
		
		int l1,l2;

		while(gets(s) != NULL)
		{
				l1 = strlen(s);
				printf("%d\n",l1);
				if(l1>l2)
				{
						l2 = l1;
				strcpy(sp,s);
				}		
		}
		puts(sp);
		printf("%d\n",l2);
}
