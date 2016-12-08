#include<stdio.h>
#include<stdlib.h>

typedef int TD;

typedef struct list 
{
		TD node;
		struct list * next;
}List;

List *ph;

List *create(TD val)
{
		List *pnew;
		pnew= (List*)malloc(sizeof(List));
		pnew->node = val;
		pnew->next = ph->next;
		
		return pnew;
}

List * push(TD val)
{
		List *pc;
		pc = create(val);
		ph->next = pc;
		
		return pc;
}
int pop()
{
		List *pt;
		pt = (List*)malloc(sizeof(List));
		pt = ph->next;
		TD val = pt->node;
		ph->next = pt->next;
		free(pt);
		return val;

}	

void print()
{
		List *pd;
		pd = (List*)malloc(sizeof(List));
		pd = ph;
		while(pd->next != ph)
		{
				pd=pd->next;
				printf("%d\n",pd->node);
		}
}
void main()
{
		ph = (List *)malloc(sizeof(List));
		ph ->next = ph;
		push(23);		
		push(43);
		print();
		printf("%d\n",pop());
}
