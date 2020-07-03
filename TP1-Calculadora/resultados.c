#include <stdio.h>
#include <stdlib.h>
#include "resultados.h"


void mostrarSuma(int numA, int numB, int result)
{
    printf("El resultado de %d + %d es: %d\n", numA, numB, result);
}

//-----------------------------------------------------------------------------------

void mostrarResta(int numA, int numB, int result)
{
     printf("El resultado de %d - %d es: %d\n", numA, numB, result);
}

//-----------------------------------------------------------------------------------

void mostrarDivision(int numA, int numB, float result)
{
    printf("El resultado de %d / %d es: %.2f\n", numA, numB, result);
}

//-----------------------------------------------------------------------------------

void mostrarMultiplicacion(int numA,int numB, int result)
{
    printf("El resultado de %d * %d es: %d\n", numA, numB, result);
}

//-----------------------------------------------------------------------------------

void mostrarFactorial(int numA, int numB, int resultA, int resultB)
{
    printf("El factorial de %d es: %d y el factorial de %d es: %d \n\n", numA, resultA, numB, resultB);
}
