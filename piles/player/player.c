 #include <stdio.h>
#include <stdlib.h>
#include "player.h"

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
Stack push_stack(Stack st, Player p)
{
	StackElement *element; 
	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		fprintf(stderr, "probleme d'allocation dynamique\n");
		exit(EXIT_FAILURE);
		/* code */
	}

	strcpy(element->pl.username,p.username); 
	element->pl.health = p.health;
	element->pl.points = p.points;
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


Player top_stack(Stack st)
{
	if (is_empty_stack(st))
	{
		printf("any sommet\n");
		exit(EXIT_FAILURE);
	}
	return st->pl;
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
		
			printf("Player : %s health [%d] & points : %d\n",st->pl.username, st->pl.health, st->pl.points );
		st = st->next;
	}
}