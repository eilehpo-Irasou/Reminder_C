#include <stdio.h>
#include <stdlib.h>
#include "piles.h"
int main(int argc, char const *argv[])
{
	Stack sta = new_stack();
	if (is_empty_stack(sta))
	{
		printf("empty\n");
		/* code */
	}
	else
	{
		printf("not empty\n");
	}
	/* code */
	return 0;
}