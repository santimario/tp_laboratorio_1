#include <stdio.h>
#include <stdlib.h>
//funciones para calculos
float sumar(float numeroA,float numeroB)
{
    float resultado;

    resultado = numeroA + numeroB;

    return resultado;
}



float restar(float numeroA,float numeroB)
{
    float resultado;

    resultado = numeroA - numeroB;

    return resultado;
}



float dividir(float numeroA,float numeroB)
{
    float resultado;

    if(numeroA ==0 && numeroB==0)
    {
        printf("No es posible dividir por 0\n");
    }
    else
    {
        resultado = (float) numeroA / numeroB;
    }

    return resultado;
}


float multiplicar(float numeroA,float numeroB)
{
    float resultado;

    resultado = numeroA * numeroB;

    return resultado;
}


float factoriar(float numeroA)
{
    float resultado = 1;

    for(int i = 1;i<=numeroA;i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}
