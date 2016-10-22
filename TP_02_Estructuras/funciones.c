#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



/**
 * \brief Inicializa el status en un array de clientes
 * \param clienteArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a status
 * \return -
 *
 */
void setStatus(persona personaArray[],int arrayLenght,int value)
{
    int i;
    for(i=0;i < arrayLenght; i++)
        {

       personaArray[i].status = value;
        }
}

/**
 * \brief Inicializa el Id en un array de clientes
 * \param clienteArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param value Es el valor que se asignara a status
 * \return -
 *
 */
void setid(persona personaArray[], int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
       personaArray[i].id = i+1;
    }
}


/** \brief
 *menu opciones
 * \param texto[] ingresa las opciones del menu
 * \param auxOpcion[] auxiliar de opciones
 * \return retorna la opcion si esta en el rango
 *
 */
int menuOpciones(char texto[],char auxOpcion[])
        {
            int resultado=0;
            char opcionSoN;

            resultado=getStringNumeros(texto,auxOpcion);


                while(resultado==0)
                {

                    fflush(stdin);
                    opcionSoN = getChar("La opcion no es valida, Desea volver a Ingresar? S/N: ");
                    if(toupper(opcionSoN)!='S')
                    {
                        exit(0);
                    }

                else{ return 0;}
            }

            return atoi(auxOpcion);
        }




/**
 * \brief Busca la primer ocurrencia de un cliente mediante su id
 * \param clienteArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \param code Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)

 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}




/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param bookArray Es el array en el cual buscar
 * \param arrayLenght Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int findEmptyPlace(persona personaArray[],int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(personaArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \return El número ingresado por el usuario
 *
 */
int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit)
{
    char auxStr[256];
    int auxInt;
    while(1)
    {
        if (!getStringNumeros(requestMessage,auxStr))
        {
            printf ("%s\n",errorMessage);
            fflush(stdin);
            continue;

        }
        auxInt = atoi(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("El numero del debe ser mayor a %d y menor a %d\n",lowLimit,hiLimit);
            continue;

        }
        return auxInt;

    }


}


/**
 * \brief Solicita un string
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param input Array donde se cargará el texto ingresado
 * \return -
 *
 */
void getValidString(char requestMessage[],char errorMessage[], char input[])
{

    while(1)
    {
        if (!getStringLetras(requestMessage,input))
        {
            printf ("%s\n",errorMessage);
            continue;
        }
        cleanStdin();
        break;
    }

}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Limpia el stdin, similar a fflush
 * \param -
 * \return -
 *
 */
void cleanStdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}



void setPersona(persona personaArray[], int freePlaceIndex,char nombreAux[],char apellidoAux[],int dniAux,int edadAux)
{
    strcpy(personaArray[freePlaceIndex].apellido,apellidoAux);
    strcpy(personaArray[freePlaceIndex].nombre,nombreAux);
    personaArray[freePlaceIndex].dni = dniAux;
    personaArray[freePlaceIndex].edad = edadAux;
    personaArray[freePlaceIndex].status = 1;

    printf("\n\nPERSONA AGREGADA CON EXITO \n\n");
}


void mostrarPorId (persona personaArray[], int freePlaceIndex)
    {int i;
        for(i=0;i<freePlaceIndex;i++)
        {
            if(personaArray[freePlaceIndex].status==1)
            {
                printf("ID %d || NOMBRE: %s  || APELLIDO %s || DNI: %d\n",personaArray[freePlaceIndex].id,personaArray[freePlaceIndex].nombre,personaArray[freePlaceIndex].apellido,personaArray[freePlaceIndex].dni);
            }
        }
    }
