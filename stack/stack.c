#include<stdio.h>
#include<stdlib.h>

typedef int TD;

typedef struct list 
{
		TD node;
		struct list *Next;
}List;

List *ph = NULL;

List * Create(TD val)
{
		List *pNew;
		pNew = (List *)malloc(sizeof(List));
		pNew ->node = val;
		pNew->Next = ph;

		return pNew;
}
//头插法　　
List * Push(TD val)
{
		List *pT;
		pT = Create(val);
		pT ->Next =ph;
		ph = pT;

		return pT;
}

int Pop()
{		
		TD val;
		List * pB;
		pB= (List *)malloc(sizeof(List));
		if(NULL == ph)
		{
				return -1;
		}else{
				val = ph->node;
				pB = ph;
				ph = ph ->Next;
				free(pB);
				return val;
		}
}
void Empty()
{
		if(NULL == ph)
		{
				printf("Yes!\n");
		}else
				printf("No\n");

}

void Print()
{
		if(NULL == ph)
		{
				printf("Is empty\n");
		}else{
				while(ph != NULL)
				{
						TD  val = ph->node;
						printf("%d\n",val);
						ph = ph->Next;
				}
		}
}	


void main()
{
		
		Push(12);
		Push(14);
		
		printf("%d\n", Pop());
		printf("%d\n",Pop());
		Empty();
		Push(54);
		Print();

}


