#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

typedef struct Player
{
	signed char username[256];
	int health; 
	int points; 
	
}Player;


typedef struct StackElement
{
	Player pl;
	struct StackElement *next;

}StackElement, *Stack;

/* prototype des fonctions*/ 

Stack new_stack(void);// creation d'une pile
Bool is_empty_stack(Stack st); //verfie si pile vide
Stack push_stack(Stack st, Player pl1); // push = pousser
Stack clear_stack(Stack st);// retourne pile vide
Stack pop_stack(Stack st); // retire un element
Player top_stack(Stack st); // premier element 
int stack_length(Stack st);
void print_stack(Stack st); // affiche pile

#endif