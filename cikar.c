#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

	int sayi1 = atoi(argv[0]);
	int sayi2 = atoi(argv[1]);
	int cikar = sayi1 - sayi2;
	printf("Fark:  %d + %d = %d", sayi1, sayi2, cikar);
	printf("\n");

	return 0;
}
