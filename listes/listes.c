#include <stdio.h>
#include <stdlib.h>
#include "listes.h"

List new_list(void)
{
	return NULL; 
}

Bool is_empty_list(List li)
{
	if (li == NULL)
	{
		return true; 
		/* code */
	}
	return false;
}


int list_length(List li)
{
	int size= 0; 
	if (!is_empty_list(li)){

	while(li!=NULL)
	{
		++size;
		li = li->next; 
	}
}

	return size; 
}


void print_list(List li)
{
	if(is_empty_list(li))
	{
		printf("nothing in the list\n");
		return ; 
	}
	while(li!=NULL)
	{
		printf("[%d] \n", li->value  );
		li = li->next; 
	}

	printf("\n");
}

/*
par defaut pointeur en debut de liste 
le but est de le placer à la fin et ensuite ajouter
l'element
*/
List insert_back_list(List li , int x)
{
	ListElement * element; 
	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		fprintf(stderr, "problem malloc\n");
		exit(EXIT_FAILURE);
		/* code */
	}
	element-> value = x ;
	element-> next = NULL; 

	if (is_empty_list(li))
	{
		return element; 
	}

	
		ListElement * temp; 
		temp = li; 
		while(temp->next != NULL)
		{
			temp = temp->next; 

		}
		temp->next = element;

		return li; 


}

// le devant de la liste

List insert_front_list(List li , int x)
{
	ListElement * element; 
	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		fprintf(stderr, "problem malloc\n" );
		exit(EXIT_FAILURE);
		/* code */
	}
	element-> value = x ;


	if (is_empty_list(li))
	{
		element->next = NULL;  
	}
	else
	{
		element->next = li; 
	}
	return element ; 

}

List delete_last_element(List li )
{
	if (is_empty_list(li))
	{
		return new_list();
	}
	if (li->next == NULL)
	{
		free(li);
		li= NULL;

		return new_list();
	}

	ListElement * temp= li;
	ListElement * before = li ; 
	while(temp->next !=NULL)
	{
		before = temp; 
		temp= temp->next;
	} 

	before->next = NULL;
	free(temp);
	temp=NULL;

	return li ; 
}


List delete_first_element(List li )
{
	ListElement * element; 
	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		fprintf(stderr, "problem malloc\n");
		exit(EXIT_FAILURE);
		/* code */
	}
	if(is_empty_list(li))
	{
		return new_list();
	}

	element = li->next ; 
	free(li);
	li=NULL;

	return element; 
}



List clear_list(List li)
{
	if(is_empty_list(li))
	{
		return new_list();
	}
	while(li !=NULL)
	{
		li = delete_first_element(li);
	}
}