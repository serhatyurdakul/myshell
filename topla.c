#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	int topla =  atoi(argv[0]) + atoi(argv[1]);
	printf("Toplama islemi: %d + %d = %d\n",atoi(argv[0]),atoi(argv[1]),topla);

	return 0;
} 
