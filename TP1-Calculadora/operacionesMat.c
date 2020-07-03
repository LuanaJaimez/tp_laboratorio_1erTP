#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operacionesMat.h"


//a) Suma
int sumar(int numeroA, int numeroB)
{
    int resultado;

	if(numeroA != 0 || numeroB != 0)
	{
        resultado = numeroA + numeroB;
	}
	else
    {
        printf("\nIngrese un operando para realizar esta operacion\n");
    }

    return resultado;
}

//-----------------------------------------------------------------------------------

//b) Resta
int restar(int numeroA, int numeroB)
{
    int resultado;
	if(numeroA != 0 || numeroB != 0)
	{
		resultado = numeroA - numeroB;
	}
	else
    {
        printf("\nIngrese un operando para realizar esta operacion\n");
    }

    return resultado;
}

//-----------------------------------------------------------------------------------

//c) Division
float dividir(int numeroA, int numeroB)
{
    float resultado;

	if(numeroB != 0)
	{
        resultado = (float) numeroA / numeroB;
	}
	else
    {
        printf("\nIngrese un operando B distinto de 0 para realizar la division\n");
    }

    return resultado;
}

//-----------------------------------------------------------------------------------

//d) Multiplicacion
int multiplicar(int numeroA, int numeroB)
{
    int resultado;

	if(numeroA != 0 || numeroB != 0)
	{
		resultado = numeroA * numeroB;
	}
	else
    {
        printf("\nIngrese un operando para realizar esta operacion\n");
    }

    return resultado;
}

//-----------------------------------------------------------------------------------

//e) Factorial
int factorial(int a)
{
    int fact = 0;

    if(a >= 0)
    {
        if(a == 1 || a == 0)
        {
            fact = 1;
        }
        else
        {
            fact = a * factorial(a - 1);
        }
    }
    else
    {
        printf("\nIngrese un operando valido para realizar esta operacion\n");
    }

    return fact;
}
