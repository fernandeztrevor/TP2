#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[20];
    int edad;
    int estado;
    int dni;

}persona;


/**
*\brief Verifica si el ingreso es numero
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int numerico(char str[]);

/**
*\brief Verifica si el ingreso es solo letras
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int letras(char str[]);

/**
*\brief Verifica si el ingreso es alfanumérico
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int alfanumerico(char str[]);

/**
 * Inicializa el array de estado en un determinado valor.
 * @param estado es el array a ser inicializado.
 * @param cantidad indica la longitud del array.
 * @param valor es el valor que será cargado en cada posición.
 * @return el primer indice disponible
 */
void inicializar(persona listaPersonas[], int cantidad, int valor);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(persona listaPersonas[], int cantidad, int valor);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
//int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
