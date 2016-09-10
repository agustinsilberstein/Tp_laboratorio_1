#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void main()
{
    char seguir='s';
    int opcion=0;
    float numeroA,numeroB;
    float sumar, restar, multiR, diviR, factoR;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:

                system("cls");

                printf("Ingrese el primer numero\n");
                PedirNumero(numeroA);



                break;

            case 2:
                system("cls");
                printf("Ingrese el segundo numero\n");
                 PedirNumero(numeroB);



                break;

            case 3:
                system("cls");
                sumar = function_Suma(numeroA,numeroB);
                printf("La suma es %f \n", sumar);

                break;

            case 4:

                system("cls");
                restar= function_Resta(numeroA,numeroB);
                printf("La resta es %f \n", restar);

                break;

            case 5:
                system("cls");
                multiR= function_Multiplicacion(numeroA,numeroB);
                printf("La multiplicacion es %f \n", multiR);

                break;
            case 6:

                break;
            case 7:

                break;

            case 8:

                break;
            case 9:
                seguir = 'n';
                break;
        }



}
}
