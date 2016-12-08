#include<stdio.h>
#include<string.h>


main()
{
		char ch;
		signed char checksum = -1;
		while((ch=getchar()) != EOF)
		{		
				putchar(ch);
				checksum += ch;

				if(ch == '\n')
				{
						printf("%d\n",checksum);
						checksum = -1;
				}

		}
}
