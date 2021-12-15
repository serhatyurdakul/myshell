#include <stdio.h>
#include <stdlib.h>

int sayiMi(char* num){
int k = 0;
	while(num[k] != '\0'){
		if(num[k]  <'0' ||num[k] >'9') return 0;
		k++;
	}return 1;
}

int main(int argc, char* argv[]){
	
if(sayiMi(argv[1])){
	int tekrarSayisi = atoi(argv[1]);
	int s;
	for(s = 0; s< tekrarSayisi;s++){
		printf("%s",argv[0]);
		printf("\n");
	}
	printf("\n  ");
}else{
	printf("gecersiz secim yaptiniz");
} return 0;
} 
