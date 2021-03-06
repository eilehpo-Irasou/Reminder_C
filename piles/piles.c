 #include <stdio.h>
#include <stdlib.h>
#include "piles.h"

/*

fonction qui crée une nouvelle pile (stack)
*/ 
Stack new_stack(void)
{
	return NULL;
}

/********************/
/*
fonction qui verifie si une pile est vide ou non 
*/
Bool is_empty_stack(Stack st)
{
	if (st==NULL)
	{
		return true;
	}
	return false;
}

/********************/

/* ajoute des elements*/
Stack push_stack(Stack st, int integer)
{
	StackElement *element; 
	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		fprintf(stderr, "probleme d'allocation dynamique\n");
		exit(EXIT_FAILURE);
		/* code */
	}

	element->value = integer; 
	element->next = st; 
	return element; 
}

/****
toute la memoire liberée

*****/

Stack clear_stack(Stack st)
{
	/*StackElement * element;
	if (is_empty_stack(st))
	{
		return new_stack();
	}
	element = st->next;
	free(st);

	return clear_stack(element);*/
	while(!is_empty_stack(st))
	{
		st=pop_stack(st);

	}
	return new_stack();
	

}


Stack pop_stack(Stack st)
{
	StackElement * element;
	if (is_empty_stack(st))
	{
		return new_stack();
	}
	// tout sauf le premier
	element = st->next;
	free(st);
	return element;
}


int top_stack(Stack st)
{
	if (is_empty_stack(st))
	{
		printf("any sommet\n");
		return 0;
	}
	return st->value;
}


int stack_length(Stack st)
{
	int length = 0 ;
	while(!is_empty_stack(st))
	{
		length++;
		st= st->next;
	}
	return length;
}



void print_stack(Stack st)
{
	if(is_empty_stack(st))
	{
		printf("nothing in stack\n");
		return;
	}
	while(!is_empty_stack(st))
	{
		
			printf("Element [%d]\n",st->value );
		st = st->next;
	}
}