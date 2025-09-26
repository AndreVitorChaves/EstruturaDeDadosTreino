
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

int numerico(const char *str){

    int contNumerico = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++){
        if (isdigit(str[i])){
            contNumerico ++;
        }
    }

    return contNumerico;
}

int especiais(const char *str){

    char caracteres[] = "()*+,-./";

    int contEspeciais = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++){
        if (strchr(caracteres, str[i]) != NULL){
            contEspeciais ++;
        }
    }

    return contEspeciais;

}

int main()
{
    char senha [50];
    int validar = 0;

    printf("===============================\n");
    printf("Bem vindo(a) ao sistema verificador de senhas!\n");
    printf("===============================\n");

    do{
    printf("\n Digite sua senha: ");
    scanf("%s", senha);


        if(strlen(senha) < 10){
                validar = 1;
        printf("\n Senha invalida! \n Possui menos caracteres do que o minimo esperado (10)! \n");
            if (maiuscula(senha) < 2){
                printf("\n Possui menos caracteres maiusculos do que o minimo esperado (2)! \n");
            }
            if (minuscula(senha) < 3){
                    printf("\n Possui menos caracteres minusculos do que o minimo esperado (3)! \n");
            }
            if (numerico(senha) < 3){
                        printf("\n Possui menos caracteres numericos do que o minimo esperado (3)! \n");
            }
            if (especiais(senha) < 2){
                            printf("\n Possui menos caracteres especiais do que o minimo esperado (2)! \n");
            }
        }

        else{
            if (maiuscula(senha) < 2){
                    validar = 1;
                printf("\n Senha invalida! \n Possui menos caracteres maiusculos do que o minimo esperado (2)! \n");
                if (minuscula(senha) < 3){
                    printf("\n Possui menos caracteres minusculos do que o minimo esperado (3)! \n");
                }
                if (numerico(senha) < 3){
                        printf("\n Possui menos caracteres numericos do que o minimo esperado (3)! \n");
                }
                if (especiais(senha) < 2){
                            printf("\n Possui menos caracteres especiais do que o minimo esperado (2)! \n");
                }
            }

            else{
                if (minuscula(senha) < 3){
                        validar = 1;
                    printf("\n Senha invalida! \n Possui menos caracteres minusculos do que o minimo esperado (3)! \n");
                    if (numerico(senha) < 3){
                        printf("\n Possui menos caracteres numericos do que o minimo esperado (3)! \n");
                    }
                    if (especiais(senha) < 2){
                            printf("\n Possui menos caracteres especiais do que o minimo esperado (2)! \n");
                    }
                }

                else{
                    if (numerico(senha) < 3){
                            validar = 1;
                        printf("\n Senha invalida! \n Possui menos caracteres numericos do que o minimo esperado (3)! \n");
                        if (especiais(senha) < 2){
                            printf("\n Possui menos caracteres especiais do que o minimo esperado (2)! \n");
                        }
                    }

                    else{
                        if (especiais(senha) < 2){
                                validar = 1;
                            printf("\n Senha invalida! \n Possui menos caracteres especiais do que o minimo esperado (2)! \n");
                        }
                        else{
                            validar = 0;
                            printf("Parabens, voce digitou uma senha valida e extremamente forte! \n");
                        }
                    }
                }
            }
        }



    }while (validar != 0);

    int qntMaiusculas = maiuscula(senha);
    printf ("\n Letras maiusculas: %i \n", qntMaiusculas );

    int qntMinusculas = minuscula(senha);
    printf ("Letras minusculas: %i \n", qntMinusculas );

    int qntNumericos = numerico(senha);
    printf ("Valores numericos: %i \n", qntNumericos );

    int qntEspeciais = especiais(senha);
    printf ("Caracteres especiais: %i \n", qntEspeciais );

    return 0;
}



