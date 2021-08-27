

#include <stdio.h>
#include <stdlib.h>
#include "player.h"



int main(int argc, char const *argv[])
{
	/* Players*/

	Player p1 = {"lili", 100, 89};
	Player p2 = {"lala", 98, 122};
	Player p3 = {"Toto", 100, 89};
	Stack sta = new_stack();
	print_stack(sta);
	printf("---------------------------\n");
	printf("taille de la pile : %d \n",stack_length(sta) );
	sta = push_stack(sta,p1);
	sta = push_stack(sta,p2);
	sta = push_stack(sta,p3);
	printf("---------------------------\n");
	printf("taille de la pile : %d \n",stack_length(sta) );
	print_stack(sta);
	printf("---------------------------\n");

	sta = pop_stack(sta);
	printf("taille de la pile : %d \n",stack_length(sta) );
	print_stack(sta);
		printf("---------------------------\n");
	sta= clear_stack(sta);
	printf("taille de la pile : %d \n",stack_length(sta) );
	print_stack(sta);
	return 0;
}