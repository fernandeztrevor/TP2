#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int numerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i]>'9')
            return 0;
        i++;
    }
    return 1;
}

int letras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}

int alfanumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            return 0;
        i++;
    }
    return 1;
}

void inicializar(persona listaPersonas[], int cantidad, int valor)
{
    int i;

    for (i=0; i<cantidad; i++)
    {
        listaPersonas[i].estado = valor;
    }
}

int obtenerEspacioLibre(persona listaPersonas[], int cantidad, int valor)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
     if (listaPersonas[i].estado == valor)
     {
         return i;
     }
    }
    return -1;
}
