all:	myshell tekrar islem topla cikar
 
myshell:	myshell.c
			gcc myshell.c	-o	myshell	-lreadline
	
tekrar:	tekrar.c
		gcc	tekrar.c	-o	tekrar

islem:	islem.c
		gcc	islem.c	-o	islem
	
topla:	topla.c
		gcc topla.c	-o	topla
	
cikar:	cikar.c
		gcc	cikar.c	-o	cikar

clean:
		rm	-rf	*o	all
