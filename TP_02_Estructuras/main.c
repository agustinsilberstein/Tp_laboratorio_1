#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX_QTY 20


int main()
{
    int option= 0;
    char opcionBuffer[50];
    int freePlaceIndex;
    persona personaArray[MAX_QTY];
    int dniAux;
    int edadAux;
    char nombreAux[50];
    char apellidoAux[50];

    setStatus(personaArray,MAX_QTY,0);
    setid(personaArray,MAX_QTY);


while(option !=7)
    {
         option = menuOpciones("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - IMPRIMIR LISTA ORDENADA POR NOMBRE\n5 - IMPRIMIR GRAFICO DE EDADES\n6 - SALIR\n\n\n",opcionBuffer);
         switch(option)
         {
            case 1: // ALTA DE CLIENTE


                  freePlaceIndex = findEmptyPlace(personaArray,MAX_QTY);
                if(freePlaceIndex == -1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }


                dniAux = getValidInt("Ingrese el DNI: ","El DNI debe ser numerico\n", 10000000, 99999999);
                 fflush(stdin);
                getValidString("Ingrese el Nombre de la persona: ","El nombre debe estar compuesto solo por letras\n", nombreAux);
                fflush(stdin);
                getValidString("Ingrese el Apellido de la persona: ","El Apellido debe ser solo por letras\n", apellidoAux);
                edadAux=getValidInt("Ingrese la edad de la persona: ","La edad debe ser numerica \n",1,99);
                setPersona(personaArray,freePlaceIndex,nombreAux,apellidoAux,dniAux,edadAux);



            case 2://BAJA DEL CLIENTE
                 mostrarPorId(personaArray, MAX_QTY);



            break;


         }


    }
}




































