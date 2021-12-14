#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

int InputAl(char *input)
{
    char *line;
    line = readline("\nmyshell>> ");
    if (strlen(line) != 0)
    {
        add_history(line);
        strcpy(input, line);
        return 0;
    }
    else
    {
        return 1;
    }
}

void parseEdildiMi(char *parseEdilecek, char **parseEdilen)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        parseEdilen[i] = strsep(&parseEdilecek, "|");
        if (parseEdilen[i] == NULL)
            break;
        if (strlen(parseEdilen[i]) == 0)
            i--;
    }
}

void paraseAra(char *parseEdilecek, char **parseEdilen)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        parseEdilen[i] = strsep(&parseEdilecek, " ");
        if (parseEdilen[i] == NULL)
            break;
        if (strlen(parseEdilen[i]) == 0)
            i--;
    }
}

void exec(char *argv[])
{
    char *yeniargv[4];
    yeniargv[0] = argv[1];
    yeniargv[1] = argv[2];
    yeniargv[2] = argv[3];
    yeniargv[3] = NULL;
    int i;
    int f = fork();
    if (f == 0)
    {
        i = execv(argv[0], yeniargv);
        if (i < 0)
        {
            printf("gecersiz  komut girildi");
        }
    }
    else {
        wait(&i);
    }
}

int length(char *metin[])
{
    int x = 0;
    while (metin[x] != '\0')
    {
        x++;
    }
    return x;
}

int main(){
    char input[1000];
    char *kelimeler[100];
    char *komutlar[100];
    int ext = 0;

    while (1)
    {
        int i;
        InputAl(input);
        parseEdildiMi(input, komutlar);
        for (i = 0; i < length(komutlar); i++)
        {
            paraseAra(komutlar[i], kelimeler);
            if (strcmp(kelimeler[0], "exit") == 0){
                ext = 1;
                break;
            }else if (strcmp(kelimeler[0], "clear") == 0)
            {
                printf("\033[H\033[J");
            }else if (strcmp(kelimeler[0], "cat") == 0)
            {
                char *newargs[3];
                newargs[0] = "cat";
                newargs[1] = kelimeler[1];
                newargs[2] = NULL;
                int f1;
                f1 = fork();
                if (f1 == 0) execv("/bin/cat", newargs);
                else
                {
                    wait(&i);
                }
            }else
            {exec(kelimeler);}   
        }if (ext) break;
    }return 0;
}
