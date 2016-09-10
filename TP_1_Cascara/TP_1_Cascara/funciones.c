#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int men (char texto[500], float numero1, int opcion, char continuar)
{
    texto= "1- Ingresar 1er operando (A=x)\n 2- Ingresar 2do operando (B=y)\n 3- Calcular la suma (A+B)\n 4- Calcular la resta (A-B)\n 5- Calcular la division (A/B)\n 6- Calcular la multiplicacion (A*B)\n 7- Calcular el factorial (A!)\n 8- Calcular todas las operaciones\n 9- Salir\n";
     scanf("%d",&opcion);
     while(opcion<1||opcion>9)
     {
         printf("La opcion debe estar entre 1 y 9. Si desea continuar presione la telca s.");
         scanf("%c",&continuar);
         if(continuar =='s')
         {
            system("cls");
            printf("%s",texto);
         }
         else {
                opcion  = 9;
                break;

         }

     }




}


/** \brief Solicita un operando
 *
 * \param pide el operando
 * \param
 * \return devuelve el operando
 *
 */

float PedirNumero(float a)
{
    scanf("%f",&a);
    float retorno=a;
    return retorno;
}

/** \brief suma dos numeros
 *
 * \param defino la variable resultado
 * \param realizo la suma
 * \return devuelvo el resultado
 *
 */

float function_Suma (float a,float b)
{
    float resultado;
    resultado = a+b;
    return resultado;

}
/** \brief resta dos numeros
 *
 * \param defino la variable resultado
 * \param realiza la resta
 * \return devuelve el resultado
 *
 */

float function_Resta (float a,float b)
{
    float resultado;
    resultado = a-b;
    return resultado;

}
/** \brief realiza la multiplicacion de dos numeros
 *
 * \param defino la variable resultado
 * \param multiplico los dos numeros
 * \return devuelve el resultado
 *
 */

float function_Multiplicacion (float a,float b)
{
    float resultado;
    resultado= a*b;
    return resultado;

}
/** \brief realiza la division de dos numeros
 *
 * \param defino la variable resultado
 * \param realizo la division
 * \return devuelvo el resultado
 *
 */

float function_Division (float a,float b)
{
    float resultado;

    if (b==0)
        {
            printf("No se puede dividir por 0, reingrese el numero:/n");
            scanf("%f",b);
        }
                else
                    {
                        resultado= a/b;
                        return resultado;
                    }







}


/** \brief realiza el factorial de un numero natural
 *
 * \param si a vale 0 devuelve 1
 * \param defino la variable resultado
 * \return
 *
 */

int function_Factorial (int a)
    {
        if (a==0)
        {
            return 1;
        }
        else
            {
                float resultado;
                resultado=resultado*(a-1);
                return resultado;

            }
    }


//float todasLasOperaciones (float a,float b)
//    {
//
//    }


