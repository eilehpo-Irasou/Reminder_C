#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	
	signed char word[] = "hello";
	printf("%s\n", word );

	signed char firstname[26] ;
	printf("what is your name ? \n");
	scanf("%s", firstname);
	printf("your firstname is : %s\n", firstname );

	char firstname2[26] = "jason";
	char newfirstname[256];
	printf("your firstname at the beginning is : %s\n", firstname2);
	printf("change it ?! \n");
	scanf("%s", newfirstname);
	printf("your newfirstname is %s\n", newfirstname);

	char text[] = "jason";
	printf("text : %s\n", text);
	printf("size of the text\n");
	printf(" size : %ld\n", strlen(text));

	char w1[] = "a";
	char w2[] = "boat";
	int test = strcmp(w1,w2);

	if (test == 0)
	{
		printf("same word\n");
		/* code */
	}
	else if (test < 0)
	{
		printf("%s < %s \n", w1,w2 );

	}
	else
	{
		printf("%s > %s \n", w1,w2 );
	}


	printf("%s \n", strcat(w1,w2));

	char cut[10]="ying-yang";
	char c = '-';
	char *r = strchr(cut, c);
	printf("%s\n",r );

	char final[256];
	sprintf(final, "try", 3);
	printf("%s\n",final );

	return 0;
}