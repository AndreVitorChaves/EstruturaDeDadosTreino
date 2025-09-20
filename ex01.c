#include <stdio.h>
#include <string.h>
#include <ctype.h>


int maiuscula (const char *str){

    int contMaiuscula = 0;
    int tamanho = strlen(str);



    for (int i = 0; i < tamanho; i++){
        if (isupper(str[i])){
            contMaiuscula ++;
        }
    }

    return contMaiuscula;
}

int minuscula (const char *str){

    int contMinuscula = 0;
    int tamanho = strlen(str);



    for (int i = 0; i < tamanho; i++){
        if (islower(str[i])){
            contMinuscula ++;
        }
    }

    return contMinuscula;
}

int main()
{
    char senha [50];

    printf("Digite sua senha: ");
    scanf("%s", senha);



    if(strlen(senha) >= 10){
        printf("Acesso liberado!");
    }
    else{
        printf("Acesso negado!");
    }

    int qntMaiusculas = maiuscula(senha);
    printf ("%i", qntMaiusculas );

    int qntMinusculas = minuscula(senha);
    printf ("%i", qntMinusculas );

   return 0;
   }
