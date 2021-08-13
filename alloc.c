#include <stdio.h>
#include <stdlib.h>
/*

dynamic

sizeof (<data>) : retourne taille en octet d'une donnée
malloc (<byte size>) : alloue dynamiquement une zone memoire
free (data allouée) : libere la memoire allouée
calloc (<data, size in byte) : alloue 
et inititia tout à zero
realloc(data, new size) : réalloue un espace mémoire

*/


int main(int argc, char const *argv[])
{
	/* code */
	int nbj = 5;
	int *list_j = NULL;
	int i ; 
	
	/*printf("how many players ?\n");
	scanf("%d", &nbj);*/

	list_j = malloc(sizeof(int)*nbj); 
	if (list_j == NULL)
		exit(1);
		/* code */
	
	
	for(i = 0 ; i < nbj; i++)
	{
		printf("Player : %d ==> nbr %d \n",i+1, i*4);
		list_j[i] = i*4;
	}
	for ( i = 0; i <nbj ; i++)
	{
		printf("[%d]\n",list_j[i]);
		/* code */
	}
	printf("adresse %p\n", list_j );
	/****/

	printf("with realloc !!\n");
	nbj = 10 ;
	list_j = realloc(list_j, nbj* sizeof(int));
	if (list_j == NULL)
		exit(1);
		/* code */
	for(i = 0 ; i < nbj; i++)
	{
		printf("Player : %d ==> nbr %d \n",i+1, i*4);
		list_j[i] = i*4;
	}
	for ( i = 0; i <nbj ; i++)
	{
		printf("[%d]\n",list_j[i]);
		/* code */
	}
	printf("adresse %p\n", list_j );
	free(list_j);
	return 0;
}
