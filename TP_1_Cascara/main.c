#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <math.h>


int main()
{

    int opcion=0;
    char opcionBuffer[100];
    int aux;
    char buffer[200];

    float numero1, numero2, resultado;


 while(opcion !=9)
    {
         opcion = menuOpciones("\n\n\n1 - NUMERO 1 \n2 - NUMERO 2 \n3 - SUMA\n4 - RESTA\n5 - MULTIPLICACION\n6 - DIVISION \n7 - FACTORIAL\n8 - MOSTRAR TODO\n9 - SALIR\n\n\n",opcionBuffer);


        switch(opcion)
        {
            case 1:
                aux=getStringNumerosFlotantes("Ingrese el primer numero: ",buffer);
                fflush(stdin);

                while(aux==0)
                    {
                        printf("\n\nDebe ingresar un numero!!!!!!!!!!!!\n\n");
                    break;
                    }

                numero1=atof(buffer);

                break;
            case 2:

                          aux=getStringNumerosFlotantes("Ingrese el segundo numero: ",buffer);
                fflush(stdin);

                while(aux==0)
                    {
                        printf("\n\nDebe ingresar un numero!!!!!!!!!!!!\n\n");
                    break;
                    }

                numero2=atof(buffer);

                break;


            case 3:
                mostrarNumeros(numero1,numero2,"SUMA");
                resultado=suma(numero1,numero2);
                printf("%2.f",resultado);

                break;

            case 4:
                mostrarNumeros(numero1,numero2,"RESTA");
                resultado=resta(numero1,numero2);
                printf("%2.f",resultado);

                break;

            case 5:
                 mostrarNumeros(numero1,numero2,"MULTIPLICACION");
                resultado=multiplicacion(numero1,numero2);
                printf("%2.f",resultado);
                break;
            case 6:
                mostrarNumeros(numero1,numero2,"DIVISION");
                resultado=division(numero1,numero2);
                printf("%f",resultado);
                break;


            case 7:
                resultado=factorial(numero1);
                printf("EL FACTORIAL ES: %2.f \n",resultado);

                break;

            case 8:
            mostrarNumeros(numero1,numero2,"SUMA");
             resultado=suma(numero1,numero2);
             printf("%2.f\n",resultado);
                resultado=resta(numero1,numero2);
                printf("EL RESULTADO DE LA RESTA ES: %2.f \n",resultado);
                resultado=multiplicacion(numero1,numero2);
                printf("EL RESULTADO DE LA MULTIPLICACION ES: %2.f \n",resultado);
                resultado=division(numero1,numero2);
                printf("EL RESULTADO DE LA DIVISION ES: %f \n",resultado);
                resultado=factorial(numero1);
                printf("EL FACTORIAL ES: %2.f \n",resultado);

                break;
            case 9:
                exit(0);

                break;
        }



}
}
