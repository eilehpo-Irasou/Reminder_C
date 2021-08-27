
#include <stdio.h>
#include <stdlib.h>

/*
fopen (<file>, <mode ouverture>):
r (lecture seule , doit exister)
w (ecriture seule )
a (ajout fin fichier)
r+ (lecture et ecriture, doit ecriture)
w+ (lecture et ecriture , supprime le contenu)
a+ (ajout lecture et ecriture, fin de fichier)


fclose (<fichier>) : fermer un fichier ouvert
feof(<fichier>) : tester la fin d'un fichier
[lecture]
fgetc() : lire un caractere
fgets(<chaine> , <taille_chaine>, fichier) : lire un texte
fscanf(<fichier>, <format>, ...) : lire du texte format

[ecriture]
fputc(<caractere>, <fichier>) : ecrire un caractere
fputs(<chaine>, <fichier>) :  ecrire une ligne 
fprintf(<fichier>, <format> ...) : ecrire texte format

ftell(fichier) ; retourner poisition curseur
fseek(fichier, deplacement , origine ) : deplace curseur
SEEK_SET : debut fihier
SEEK_CURRENT : position  courrante
SEEK_END : fin

rewind (fichier) : reinitialiser la position curseur

*/

int main(int argc, char const *argv[])
{
	// pointeur vers un flux
	FILE *fic = fopen("savefiles.txt","r");
	int lettre = 0 ; 
	signed char txt[256];
	int age;
	int nbr; 
	if(fic==NULL)
	{
		exit(1);
	}

	/*printf("methode 1 \n");
	while(1)
	{

	lettre = fgetc(fic); //EOF
	if(feof(fic))
		break;
	
	printf("%c ", lettre );

	}*/
	/*printf("methode 2 \n");
	while((lettre = fgetc(fic)) != EOF)
	{
		printf("%c ", lettre );

	}*/

	/*while((fgets(txt, 255, fic))!=NULL)
	
	printf("%s\n", txt );*/
/*
	fscanf(fic, "%s %d %d", txt, &age, &nbr);
	printf("Nom %s \n",txt );
	printf("age : %d \n",age );*/



	fclose(fic);

	/* code */
	return 0;
}