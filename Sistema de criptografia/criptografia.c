
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#define max 26


// Função para criptografar o texto
void criptografar(char texto[], int chave) {
    for(int i = 0; texto[i] != '\0'; ++i) {
        char caractere = texto[i];

        // Criptografar letras maiúsculas
        if(caractere >= 'A' && caractere <= 'Z') {
            caractere = caractere + chave;
            if(caractere > 'Z') {
                caractere = caractere - 'Z' + 'A' - 1;
            }
            texto[i] = caractere;
        }
        // Criptografar letras minúsculas
        else if(caractere >= 'a' && caractere <= 'z') {
            caractere = caractere + chave;
            if(caractere > 'z') {
                caractere = caractere - 'z' + 'a' - 1;
            }
            texto[i] = caractere;
        }
    }
}

// Função para descriptografar o texto
void descriptografar(char texto[], int chave) {
    for(int i = 0; texto[i] != '\0'; ++i) {
        char caractere = texto[i];

        // Descriptografar letras maiúsculas
        if(caractere >= 'A' && caractere <= 'Z') {
            caractere = caractere - chave;
            if(caractere < 'A') {
                caractere = caractere + 'Z' - 'A' + 1;
            }
            texto[i] = caractere;
        }
        // Descriptografar letras minúsculas
        else if(caractere >= 'a' && caractere <= 'z') {
            caractere = caractere - chave;
            if(caractere < 'a') {
                caractere = caractere + 'z' - 'a' + 1;
            }
            texto[i] = caractere;
        }
    }
}

int main() {
    char texto[100];
    int chave;
    setlocale(LC_ALL, "Portuguese");
    system("cls");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                              ' BEM VINDO '                           |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                        ' SISTEMA DE CRIPTOGRAFIA '                   |");
                printf("\n                  |                        '   FATEC - AMERICANA   '                     |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                             _______________                          |");
                printf("\n                  |                            |               |                         |");
                printf("\n                  |                            | PRESS - ENTER |                         |");
                printf("\n                  |                            |_______________|                         |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                system("pause");
                system("cls");



                 system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                 *** Digite o texto para criptografia ***             |");
                printf("\n                  |                 ***  UTILIZAR CARACTERES MAIUSCULOS ***              |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |         |                                                |   |       |");
                printf("\n                                        Digite aqui: ");
                gets(texto);
                printf("                  |_________|________________________________________________|___|_______|");
                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");


                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                    *** Digite o valor da chave    ***                |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |                 |                                        |   |       |");
                printf("\n                                              Digite aqui:");
                scanf("%d", &chave);
                printf("                  |_________________|________________________________________|___|_______|");
                printf("\n");
                printf("\n");
                fflush(stdin);
                system("pause");
                system("cls");


    // Criptografar o texto


                system("cls");
                printf("\n");
                printf("\n");
                printf("\n                   ______________________________________________________________________");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                    *** Texto criptografado ***                       |");
                printf("\n                  |                    *** Texto descriptogrado ***                      |");

                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |                                                                      |");
                printf("\n                  |______________________________________________________________________|");
                printf("\n                  |        |                                                 |   |       |");
                criptografar(texto, chave);
                printf("\n                                      Texto criptografo: %s\n", texto);
                descriptografar(texto, chave);
                printf("\n                                      Texto descriptografado: %s\n", texto);
                printf("\n                  |________|_________________________________________________|___|_______|");




    // Descriptografar o texto




    return 0;
}
