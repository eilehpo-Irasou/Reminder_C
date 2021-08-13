#include <stdio.h>
#include <stdlib.h>

#ifndef __stack_h__
#define __stack_h__

//booleans
typedef enum 
{
	false, //0
	true //

} Bool; 

/* définition d'une pile 

- cellule qui  contient 
un entier et un pointeur vers la cellule suivante.
*/
typedef struct StackElement
{
	int value; 
	struct StackElement *next;

}StackElement, *Stack;

/* prototype des fonctions*/ 

Stack new_stack(void);
Bool is_empty_stack(Stack st);

#endif