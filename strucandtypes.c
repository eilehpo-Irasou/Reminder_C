#include <string.h>
#include <stdio.h>
typedef struct Player 
{
	signed char username[256];
	int health; 
	int points; 
	int *with_pointer ;
}Player;

typedef enum Booleans 
{
	No, 
	Yes

} Booleans; 

typedef enum cars
{
	BMW, 
	Citroen, 
	Peugeot
} cars; 


/* union même zone memoire */

union number
{
	int  integer; 
	double doubl; 
}

void create_player(Player *p)
{
	strcpy(p->username, "Naoki");
	p->health = 100;
	p->points = 100;
	p->with_pointer =3 ;
	//(*p).health = 100;
	//(*p).points = 100;
}


int main(int argc, char const *argv[])
{
	/* code */
printf("struct\n");
	Player p1 = {"",0,0, NULL};
	create_player(&p1);
	printf("Name of yhe player %s\n",p1.username );
	printf("health %d\n",p1.health );
	printf("points %d\n",p1.points );
	printf("with pointer %d\n", p1.with_pointer );

	Booleans game = No; 
	printf("enum\n");

	cars c1 = BMW;
	printf("it's a %d \n", c1 );

	printf("union \n");

	union Number n1; 
	n1.integer = 8; 
	n1.doubl = 67.09;

	return 0;
}