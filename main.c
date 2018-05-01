#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define cantidad 20
#define valor 0


int main()
{
    persona listaPersonas[cantidad];
    persona auxiliarCompleto;
    int espacioLibre;
    int resultadoBusqueda;
    char auxiliarNombre[20];
    char auxiliarEdadStr[3];
    char auxiliarDNIStr[10];
    int auxiliarEdad;
    int auxiliarDNI;
    char seguir='s';
    int opcion=0;
    int i;
    int j;

    inicializar(listaPersonas, cantidad, valor);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                {
                    espacioLibre = obtenerEspacioLibre(listaPersonas, cantidad, valor);


                        if(espacioLibre==-1)
                        {
                            printf("No quedan lugares libres");
                            break;
                        }
                        else
                        {
                        printf("\nIngrese nombre:");
                        fflush(stdin);
                        gets(auxiliarNombre);
                        while (letras(auxiliarNombre)!=1)
                        {
                            printf("El nombre solo puede estar compuesto por letras, reingrese:\n");
                            gets(auxiliarNombre);
                        }

                        printf("\nIngrese edad:");
                        fflush(stdin);
                        gets(auxiliarEdadStr);
                        while (numerico(auxiliarEdadStr)!=1)
                        {
                            printf("La edad solo puede estar compuesta por n�meros, reingrese:\n");
                            gets(auxiliarEdadStr);
                        }
                        auxiliarEdad=atoi(auxiliarEdadStr);

                        printf("\nIngrese DNI:");
                        fflush(stdin);
                        gets(auxiliarDNIStr);
                        while (numerico(auxiliarDNIStr)!=1)
                        {
                            printf("El DNI solo puede estar compuesta por n�meros, reingrese:\n");
                            gets(auxiliarDNIStr);
                        }
                        auxiliarDNI=atoi(auxiliarDNIStr);

                        strcpy(listaPersonas[espacioLibre].nombre,auxiliarNombre);
                        listaPersonas[espacioLibre].edad=auxiliarEdad;
                        listaPersonas[espacioLibre].dni=auxiliarDNI;
                        listaPersonas[espacioLibre].estado=1;
                        }
                }
                break;
            case 2:
                printf("\nSeleccione la persona que desea borrar:\n");

                for(i=0; i<cantidad; i++)
                {
                    if(listaPersonas[i].estado == 1)
                        printf("%d -- %s -- %d -- %d\n", i+1, listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                }
                scanf("%d", &i);
                /*while (numerico(i)!=1)
                {
                if(listaPersonas[i].estado=!1)
                    {
                        printf("Legajo inexistente");
                    }
                }*/
                listaPersonas[i-1].estado=-1;


                break;
            case 3:
                {
                    for(i=0; i<cantidad; i++)
                    {
                        if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        for(j=i+1; j<cantidad; j++)
                        {
                            if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        if(strcmp(listaPersonas[i].nombre,listaPersonas[j].nombre)>0)
                        {
                            auxiliarCompleto = listaPersonas[j];
                            listaPersonas[j] = listaPersonas[i];
                            listaPersonas[i] = auxiliarCompleto;
                        }
                        }

                    }
                  for(i=0; i<cantidad; i++)
                {
                    if(listaPersonas[i].estado == 1)
                        printf("%s -- %d -- %d\n", listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                }
                }

                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
