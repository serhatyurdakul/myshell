#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>


int sayiMi(char *str){	
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <'0'||str[i]>'9') return 0;
		i++;
	} return 1;
}

int main(int argc, char *argv[]){
	if (strcmp("topla", argv[0]) == 0 || strcmp("cikar", argv[0]) == 0){
		if (sayiMi(argv[1]) && sayiMi(argv[2])){
			char *yeniargw[3];
			yeniargw[0] = argv[1];
			yeniargw[1] = argv[2];
			yeniargw[2] = NULL;
			int i;
			int f = fork();
			if (f == 0){
				i = execv(argv[0], yeniargw);
				if (i < 0)
				{
					printf("gecersiz komut girdiniz");
				}
			}else
			{
				wait(&i);
			}
		}else
		{
			printf("hatali secim yapildi");
		}
	}else
	{
		printf("hatali secim yapildi");
	} return 0;
}
