#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	int cikar = atoi(argv[0]) - atoi(argv[1]);
	printf("Cikartma islemi yapmak icin: %d - %d = %d",atoi(argv[0]),atoi(argv[1]),cikar);
	printf("\n");
	
	return 0;
} 
