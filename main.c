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
    int espacioLibre;
    int resultadoBusqueda;
    char auxiliarNombre;
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


                        if(espacioLibre==1)
                        {
                            printf("No quedan lugares libres");
                            break;
                        }
                        else
                        {
                        printf("\nIngrese nombre:");
                        fflush(stdin);
                        //scanf("%s", listaPersonas[i].nombre);
                        gets(auxiliarNombre);
                        printf("\nIngrese edad:");
                        fflush(stdin);
                        scanf("%d", &auxiliarEdad);
                        //scanf("%d", listaPersonas[i].edad);
                        printf("\nIngrese DNI:");
                        n
                        while (numerico==0)
                        fflush(stdin);
                        scanf("%d", &auxiliarDNI);

                        //scanf("%d", listaPersonas[i].dni);
                        listaPersonas[espacioLibre].estado=1;
                        }
                }
                break;
            case 2:
                break;
            case 3:
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
