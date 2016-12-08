#include<stdio.h>
#include<stdlib.h>

typedef int TD;

typedef struct node
{
		TD val;
		struct node *pre;
		struct node *next;
}Node;


Node *ph;

Node *push(TD val)
{
		Node *pnew;
		pnew = (Node *)malloc(sizeof(Node));
		pnew->val = val;
		pnew->next = ph->next;
		pnew->pre = ph;
		ph->next->pre = pnew;
		ph->next = pnew;

		return pnew; 
}

void print()
{
		Node *pr;
		pr = ph->next;
		while(pr != ph)
		{
				printf("%d\n",pr->val);
				pr = pr->next;
		}
}

void main()
{
		ph=(Node *)malloc(sizeof(Node));
		ph ->next = ph;
		ph ->pre = ph;

		push(23);
		push(22);

		print();
}


