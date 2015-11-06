#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char **argv )
{

	char str[256];

	char *str1 = (char *) malloc( 50 );
//	char *str1 = "World\n";

	strcpy(str, "Hello ");

	strcpy(str1, "World\n");

	strcat( str, str1 );

	free( str1 );
	printf("%s", str);
	return 0;
}
