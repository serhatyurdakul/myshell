#include <stdio.h>
#include <stdlib.h>

int sayiMi(char* str){
int i = 0;
	while(str[i] != '\0'){
		if(str[i]  <'0' ||str[i] >'9') return 0;
		i++;
	}return 1;
}

int main(int argc, char* argv[]){
	
if(sayiMi(argv[1])){
	int tekrarSayisi = atoi(argv[1]);
	int i;
	for(i = 0; i< tekrarSayisi;i++){
		printf("%s",argv[0]);
		printf("\n");
	}
	printf("\n  ");
}else{
	printf("gecersiz secim yaptiniz");
} return 0;
} 
