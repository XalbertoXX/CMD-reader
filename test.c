#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include "libreria.h"

/*Programa principal*/
int main(int argc, char *argv[])
{
    //Declaracion de variables
    int arguments = argc;
    int lines;
    int option;
    
    //Control de argumentos introducidos
    if (arguments == 3){
        lines = atoi(argv[2]);
    }else if(arguments == 2){
        lines = 10;
    }else{
        fprintf(stderr,"Error en el uso del ejecutable %s\n",argv[0]);
        printf("Argumentos introducidos %d, requeridos min 2, max 3\n", argc);
        exit(1);
    }

    //Control de valor de la opcion elegida
    option = atoi(argv[1]);
    switch (option){
        case 1:
            head(lines);
            break;
        case 2:
            tail(lines);
            break;
        case 3:
            longlines(lines);
            break;
        default:
            fprintf(stderr,"Error en seleccion de opciones\n");
            printf("Valor introducido %d, valores aceptados:\n", option);
            printf("Introduzca 1 para mandato Head\n");
            printf("Introduzca 2 para mandato Tail\n");
            printf("Introduzca 3 para mandato LongLines\n");
            exit(1);
            break;
    }
    return 0;
    
}