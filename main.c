#include <stdio.h>
#include <stdlib.h>
#include "opAritmeticas.h"
/** \brief menu de opciones para ingresar numeros, calcular las operaciones y mostrar los resultados
 *
 * \param numeroA float almacena numero uno ingresado por usuario
 * \param numeroB float almacena numero dos ingresado por usuario
 * \return int devuelve opcion de menu
 *
 */
int menu(float numeroA,float numeroB);

//funcion principal
int main()
{
    //variables
    char respuesta = 'n';
    float numeroA;
    float numeroB;
    float resultadoSumar;
    float resultadoRestar;
    float resultadoDividir;
    float resultadoMultiplicar;
    float resultadoFactoriarA;
    float resultadoFactoriarB;


    //banderas
    int yaCalculoOperaciones = 0;
    int flagNumeroA = 0;
    int flagNumeroB = 0;


    do//primera vuelta
    {
        system("cls");

        switch(menu(numeroA, numeroB))//llamada a la funcion menu.
        {
            //ingreso de numeros A.
            case 1:
                if(!flagNumeroA)
                {
                    printf("Ingrese su primer numero: ");
                    scanf("%f", &numeroA);
                    flagNumeroA = 1;
                }
                else
                {
                    printf("Error, ingrese su primer numero: \n");

                }
            break;

            case 2:
                if(!flagNumeroB)
                {
                    printf("Ingrese su segundo numero: ");
                    scanf("%f", &numeroB);
                    flagNumeroB = 1;
                }
                else
                {
                    printf("Error, ingrese su segundo numero: \n");
                }
            break;

            case 3:
                if(flagNumeroA & flagNumeroB)
                {
                    resultadoSumar = sumar(numeroA,numeroB);
                    resultadoRestar = restar(numeroA,numeroB);
                    resultadoMultiplicar = multiplicar(numeroA,numeroB);
                    resultadoDividir = dividir(numeroA,numeroB);
                    resultadoFactoriarA = factoriar(numeroA);
                    resultadoFactoriarB =factoriar(numeroB);

                    printf("Se realizaron todos los calculos\n");
                    yaCalculoOperaciones = 1;
                }
                else
                {
                    printf("Para calcular las operaciones primero tienes que ingresar los numeros\n");
                }
            break;

            case 4:
                if(yaCalculoOperaciones)
                {
                    printf("La suma de los dos numero es: %.2f\n", resultadoSumar);
                    printf("La resta de los dos numero es: %.2f\n", resultadoRestar);
                    printf("La division de los dos numero es: %.2f\n", resultadoDividir);
                    printf("La multiplicacion de los dos numero es: %.2f\n", resultadoMultiplicar);
                    printf("El factorial de %.2f es: %.2f\n",numeroA , resultadoFactoriarA);
                    printf("El factorial de %.2f es: %.2f\n",numeroB , resultadoFactoriarB);
                }
                else
                {
                    printf("Para mostrar los resultados primero tienes que calcularlos\n");
                }
            break;

            case 5:
                printf("Esta seguro que desea salir?:");
                fflush(stdin);
                scanf("%c", &respuesta);
            break;

            default:
                printf("\nOpcion invalida\n");
            break;
        }

                //pausar sistema
                system("pause");

    }
    while(respuesta == 'n');


    return 0;

}//fin main

int menu(float numeroA, float numeroB)
{
    //variable opcion para almacenar opcion de usuario.
    int opcion;

    //limpiar pantalla

    //menu de opciones
    printf("================\n");
    printf("MENU DE OPCIONES\n");
    printf("================\n");
    printf("1 Ingresar su primer numero:%.2f ",numeroA);
    printf("\n2 Ingresar su segundo numero:%.2f ",numeroB);
    printf("\n3 Calcular operaciones de:\n-Sumar\n-Restar\n-Dividir\n-Mutiplicar\n-Factoriar");
    printf("\n4 Mostrar resultados");
    printf("\n5 Salir");



    //almacenamos la opcion
    printf("\n\nDigite su opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
