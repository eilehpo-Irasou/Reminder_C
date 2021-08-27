#include <stdio.h>
#include <stdlib.h>
#include "piles.h"
int main(int argc, char const *argv[])
{
	Stack sta = new_stack();

	/*if (is_empty_stack(sta))
	{
		printf("empty\n");
	
	}
	else
	{
		printf("not empty\n");
	}*/
	print_stack(sta);
	printf("taille de la pile : %d \n",stack_length(sta) );
printf("sommet actuel : %d \n", top_stack(sta) );
	/****************/
	sta = push_stack(sta,14);
	sta = push_stack(sta,47);
	sta = push_stack(sta,8888);
	sta = push_stack(sta,222247);
	sta = push_stack(sta,66666);
	sta = push_stack(sta,56745);
	sta = push_stack(sta,11111);
	print_stack(sta);
printf("sommet actuel : %d \n", top_stack(sta) );
	printf("taille de la pile : %d \n",stack_length(sta) );
/*
	if (is_empty_stack(sta))
	{
		printf("empty\n");
	}
	else
	{
		printf("not empty\n");
	}*/


	printf("avec pop\n");


	sta = pop_stack(sta);
	print_stack(sta);
printf("sommet actuel : %d \n", top_stack(sta) );
	printf("taille de la pile : %d \n",stack_length(sta) );
	sta = clear_stack(sta);
/*	if (is_empty_stack(sta))
	{
		printf("empty\n");
		
	}
	else
	{
		printf("not empty\n");
	}*/
	print_stack(sta);
printf("sommet actuel : %d \n", top_stack(sta) );
	printf("taille de la pile : %d \n",stack_length(sta) );

	/* code */
	return 0;
}