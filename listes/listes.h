
#ifndef __LIST__H__
#define __LIST__H__

#include <stdio.h>
#include <stdlib.h>

// BOOleans

typedef enum 
{
	false,
	true
	
}Bool;

typedef struct ListElement
{
	int value; 
	struct ListElement * next; 
}ListElement , *List; 

/*Prototypes **/
List new_list(void);
Bool is_empty_list(List li);
int list_length(List li);
void print_list(List li);
List insert_back_list(List li , int x);
List insert_front_list(List li , int x);
List delete_last_element(List li );
List delete_first_element(List li );
List clear_list(List li);
#endif




