
#include <stdio.h>

void invert_number(int *pt1, int *pt2)
{
	int tmp = 0;
	tmp = *pt2;
	*pt2 = *pt1;
	*pt1 = tmp;

}

int main(int argc, char const *argv[])
{
	
	int a = 56;
	int b = 90;

	printf(" before : %d and %d \n", a , b );
	invert_number(&a,&b);
	printf(" after : %d and %d \n", a , b );
	return 0;
}