#include <stdio.h>

int *create_tab()
{
	static int tt[5];
	int i ; 
	for (i = 0; i < 5; ++i)
	{
		tt[i] = i*3;
		/* code */
	}
	return tt; 

}



void print_tab(int *tab, int size)
{
	int i ; 
	for (i = 0; i < size; i++)
	{
		printf(" %d", tab[i] );
		/* code */

	}
	printf("\n");
}





int main(int argc, char const *argv[])
{
	int tab[3]; 
	tab[0] = 6;
	tab[1] = 67;
	tab[2] = 900; 
printf("Tab 1 with 3 elements\n");
print_tab(tab, 3);
	// not really good 

	int t[5] = {12,677,888,900,-56};
	int t2[5] = {0}; // all in zero 
	int t3[5] = {6}; // first only 4 all the rest zero 

printf("Tabs with 5 elements\n");
	print_tab(t, 5);
	print_tab(t2, 5);
	print_tab(t3, 5);


	printf("creating function \n");
	int *t_e = create_tab();
	print_tab(t_e, 5);


	printf("2d\n");

	int t4[2][2] ={{3,8}, {5,8}};
	int i , j ; 
	for (i = 0; i < 2; ++i)
	{
		for ( j = 0; j < 2; j++)
		{
			/* code */
			printf("T[%d][%d] = %d \n", i, j, t4[i][j]  );
		}
	}

	return 0;
}