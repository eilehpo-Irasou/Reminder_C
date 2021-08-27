#include <stdio.h>
#include <stdlib.h>
#include "listes.h"


int main(int argc, char const *argv[])
{
	/* code */
	List mylist = new_list();
	mylist = insert_front_list(mylist , 2);
	mylist = insert_front_list(mylist , 27);
	mylist = insert_front_list(mylist , 66);
	print_list(mylist);

	mylist= clear_list(mylist);
	print_list(mylist);



	return 0;
}