/*
 *2016-12-02
 *加上行号的标准输入输出。2016-12-02
 */
#include<stdio.h>
#include<string.h>


main()
{
		int line;
		int at_beginning = 1;
		char ch;

		while((ch=getchar()) != EOF)
		{
				if(at_beginning == 1)
				{
						line += 1;
						at_beginning = 0;
						printf("%d line\n",line);
				}

				putchar(ch);
				if(ch == '\n')
						at_beginning = 1;
		}

}
