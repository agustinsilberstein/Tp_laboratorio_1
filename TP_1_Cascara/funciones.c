#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <math.h>


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
            resultado=getStringNumerosFlotantes(texto,auxOpcion);
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






float suma (float a,float b)
{
    float resultado;
    resultado = a+b;
    return resultado;

}
float resta (float a,float b)
{
    float resultado;
    resultado = a-b;
    return resultado;

}
float multiplicacion (float a,float b)
{
    float resultado;
    resultado= a*b;
    return resultado;

}
int validar_division (float a,float b)
{

    if (b==0){return 0;}
    else{return 1;}

}
float division(float a, float b)
    {
        float resultado;
        if (validar_division(a,b)==1)
            {
                fflush(stdin);
                resultado=a/b;
                return resultado;

            }
            else
                {
                    printf("El divisor debe ser distinto de 0. No se puede realizar la division.\n ");
                    return 0;


                }
    }


int factorial (int a)
{

    int resultado;
    resultado=a;

        if(resultado==0)
    {
        return 1;
    }
        else{
                return (resultado*factorial(resultado-1));
            }
}




float function_Validacion (float a,char b)
{
    float resultado;
    resultado= a;
    return resultado;
}



/**
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
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
     fflush(stdin);

    if(esNumericoFlotante(aux))
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
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}



void mostrarNumeros(float a, float b, char resultado[])
{
    printf("EL NUMERO 1 ES: %2.f \n EL NUMERO 2 ES: %2.f \n\nEL RESULTADO DE LA %s ES: ", a,b,resultado);
}
