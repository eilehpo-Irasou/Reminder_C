#include <stdio.h>
#include <stdlib.h>
#include "files.h"

int main(int argc, char const *argv[])
{
	if(is_empty_queue())
	{
		printf("empty queue\n");
	}
	else
	{
		printf("not empty queue\n");
	}
	insert_in_queue(14);
	insert_in_queue(88);
	insert_in_queue(-134);
	printf("size of queue %d\n", queue_length() );
	print_queue();

	delete_in_queue();
	printf("size of queue %d\n", queue_length() );
	print_queue();
	clear_queue();
		print_queue();
	return 0;
}