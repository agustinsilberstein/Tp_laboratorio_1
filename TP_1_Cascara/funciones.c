#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu (char texto[800], char error [200], int desde, int hasta)
{
    int opcion;
    char opcionSoN;
    desde =1;
    hasta =5;


    do{
        printf("%s", texto);
        scanf("%d",&opcion);

        if( opcion<desde|| opcion>hasta)
            {
                printf( "El numero de opcion no es valido. Debe estar entre 1 y 9./n Desea continuar? S o N");
                scanf("%c",&opcionSoN );

                if (opcionSoN!='S'&&opcionSoN!='N')
                {
                    printf( "Desea continuar? /n S o N");
                    scanf("%c",&opcionSoN );
                }




        }
    }
    while(opcionSoN =='S');
            return opcion;



int numeroA(int a)
{
    int retorno=a;
    return retorno;
}
int numeroB(int b)
{
    int retorno=b;
    return retorno;
}

float function_Suma (float a,float b)
{
    float resultado;
    resultado = a+b;
    return resultado;

}
float function_Resta (float a,float b)
{
    float resultado;
    resultado = a-b;
    return resultado;

}
float function_Multiplicacion (float a,float b)
{
    float resultado;
    resultado= a*b;
    return resultado;

}
float function_Division (float a,float b)
{
    float resultado;
    resultado= a/b;
    return resultado;

}
int function_Factorial (int a)
{
    float resultado;
    resultado= a;
    return resultado;

}
float function_Validacion (float a,char b)
{
    float resultado;
    resultado= a;
    return resultado;
}
}

