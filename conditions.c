#include <stdio.h>
void is_number(int number)
{
	if (number ==  0)
	{
		printf("It's a zero !\n");
		/* code */
	}
	else if( number%2 == 0)
	{
		printf("it's pair \n");
	}
	else
	{
		printf("none \n");
	}
}

void making_true_false(int what )
{
	if (what) // !what -> false  what -> true
	{
		printf("it's on on \n"); 
		/* code */
	}
	else
	{
		printf("it's off\n");
	}
}

void loopfor(int choice )
{
	int i = 0 ;
	for (i = 0; i < choice; i++)
	{
		printf("loop for : i = %d\n",i );
		/* code */
	}
}


void loopwhile(int choice )
{
	int i = 0 ;
	while(i < choice)
	{

		printf("loop while i : %d\n", i );
		i++;
	} 
	
}

void loopdowhile(int choice)
{
	int i = 0 ;
	do
	{
		// execute once 
		printf("loop do while i = %d\n", i );
		i++;
	}
	while(i < choice);

}

int main(int argc, char const *argv[])
{
	is_number(6);
	is_number(0);
	is_number(13);


	making_true_false(1);

	loopwhile(20);
	loopfor(10);
	loopdowhile(15);


	/***************************************/

	/* code */
	return 0;
}