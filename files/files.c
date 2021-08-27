#include "files.h"
#include <stdio.h>
#include <stdlib.h>

Bool is_empty_queue(void)
{
	if (first == NULL && last == NULL)
	{
		return true; 
	}
	return false; 
}

/****************************************/
int queue_length(void)
{
	return nbr_elements;
}


/****************************************/
int queue_first(void){
	if (is_empty_queue())
	{
		exit(1);
		/* code */
	}
	return first->value;
}

/****************************************/
int queue_last(void)
{	
	if (is_empty_queue())
	{
		exit(1);
		/* code */
	}
	return last->value;
}
/****************************************/

void print_queue(void)
{
	if (is_empty_queue())
	{
		printf("nothing\n");
		return ; 
	}

	QueueElement *temp = first; 

	while(temp!=NULL)
	{
		printf("%d\n", temp->value);
		temp= temp->next; 
	}
	printf("\n");
}
/****************************************/


void insert_in_queue(int x )
{
	QueueElement * element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{
		fprintf(stderr, "probleme, allocation \n" );
		exit(EXIT_FAILURE);
	}
	element->value = x; 
	element->next = NULL;

	if (is_empty_queue())
	 {
	 	first = element;
	 	last = element; 
	 } 
	 else
	 {
	 	last->next = element;
	 	last = element; 
	 }
	 nbr_elements++;
}
/****************************************/
void delete_in_queue(void)
{
	if (is_empty_queue())
	 {
	 	printf("nothing deleting\n");
	 	return; 
	 } 
	 QueueElement *temp = first; 
	 if (first==last)
	 {
	 	first = NULL;
	 	last= NULL; 
	 	/* code */
	 }
	 else
	 {
	 	first = first->next;
	 }

	 free(temp);
	 nbr_elements--;

}


void clear_queue(void)
{
	if (is_empty_queue())
	{
		printf("nothing , already clean\n");
		/* code */
		return ; 
	}

	while(!is_empty_queue())
	{
		delete_in_queue();
	}
}