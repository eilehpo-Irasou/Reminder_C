#ifndef __FILES__H__
#define __FILES__H__

#include <stdlib.h>
//Booleans
typedef enum 
{ 
	false,
	true
	
}Bool;


//queue 

typedef struct QueueElement
{
	int value ; 
	struct QueueElement * next;
	
} QueueElement , *Queue;

// element en tete de file 
/* empty queue*/
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nbr_elements = 0; // nbr element de queue

Bool is_empty_queue(void);
int queue_length(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void insert_in_queue(int x );
void delete_in_queue(void);
void clear_queue(void);
#endif