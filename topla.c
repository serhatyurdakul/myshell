#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int sayi1 = atoi(argv[0]);
	int sayi2 = atoi(argv[1]);
	int topla = sayi1 + sayi2;

	printf("Toplam:  %d + %d = %d", sayi1, sayi2, topla);
	printf("\n");

	return 0;
}
