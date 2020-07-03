#include <stdio.h>
#include <stdlib.h>
#include "operacionesMat.h"
#include "resultados.h"


int main()
{
    int opcion;
    int numeroA = 0;
    int numeroB = 0;
    int flagPrimerNum = 0;
    int flagSegundoNum = 0;
    int flagMostrarResultados = 0;
    int todoOk1 = 1;
    int todoOk2 = 1;

    int sumaR = 0;
    int restaR = 0;
    int multR = 0;
    float divisionR = 0;
    int factorialAR = 0;
    int factorialBR = 0;

    char seguir = 's';
    char confirm;

    do
    {
//--------------------------------------------------------------------------------------------------------------
//Menu de opciones

        system("cls");
        printf("   *****************************************  \n");
        printf("   **** Calculadora de numeros enteros *****  \n");
        printf("   *********** Maximo 6 digitos ************  \n");
        printf("   *****************************************  \n\n");
        if(flagPrimerNum == 0)
        {
            printf("1- Ingresar primero operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar primer operando (A=%d)\n", numeroA);
        }
        if(flagSegundoNum == 0)
        {
            printf("2- Ingresar segundo operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar segundo operando (B=%d)\n", numeroB);
        }
        printf("3- Calcular todas las operaciones\n");
        if(flagPrimerNum == 0 && flagSegundoNum == 0)
        {
            printf("  a) Calcular la suma(x+y)\n");
            printf("  b) Calcular la resta(x-y)\n");
            printf("  c) Calcular la division(x/y)\n");
            printf("  d) Calcular la multiplicacion(x*y)\n");
            printf("  e) Calcular el factorial de A y B(x! | y!)\n");
        }
        else if(flagPrimerNum != 0 && flagSegundoNum == 0)
        {
            printf("  a) Calcular la suma(%d+y)\n", numeroA);
            printf("  b) Calcular la resta(%d-y)\n", numeroA);
            printf("  c) Calcular la division(%d/y)\n", numeroA);
            printf("  d) Calcular la multiplicacion(%d*y)\n", numeroA);
            printf("  e) Calcular el factorial de A y B(%d! | %y!)\n", numeroA);
        }
        else if(flagPrimerNum == 0 && flagSegundoNum != 0)
        {
            printf("  a) Calcular la suma(x+%d)\n", numeroB);
            printf("  b) Calcular la resta(x-%d)\n", numeroB);
            printf("  c) Calcular la division(x/%d)\n", numeroB);
            printf("  d) Calcular la multiplicacion(x*%d)\n", numeroB);
            printf("  e) Calcular el factorial de A y B(x! | %d!)\n", numeroB);
        }
        else if(flagPrimerNum != 0 && flagSegundoNum != 0)
        {
            printf("  a) Calcular la suma(%d+%d)\n", numeroA, numeroB);
            printf("  b) Calcular la resta(%d-%d)\n", numeroA, numeroB);
            printf("  c) Calcular la division(%d/%d)\n", numeroA, numeroB);
            printf("  d) Calcular la multiplicacion(%d*%d)\n", numeroA, numeroB);
            printf("  e) Calcular el factorial de A y B(%d! | %d!)\n", numeroA, numeroB);
        }
        printf("4- Informar resultados\n");
        printf("  a) El resultado de A+B es: %d\n", sumaR);
        printf("  b) El resultado de A-B es: %d\n", restaR);
        printf("  c) El resultado de A/B es: %.2f\n", divisionR);
        printf("  d) El resultado de A*B es: %d\n", multR);
        printf("  e) El factorial de A es: %d y el factorial de B es: %d\n", factorialAR, factorialBR);
        printf("5- Salir\n\n");

        printf("Indique opcion: ");
        scanf("%d", &opcion);

//--------------------------------------------------------------------------------------------------------------

        switch(opcion)
        {

        case 1:
            printf("\nIngrese el primer operando: ");
            scanf("%d", &numeroA);
            flagPrimerNum = 1;
            break;
        case 2:
            printf("\nIngrese el segundo operando: ");
            scanf("%d", &numeroB);
            flagSegundoNum = 1;
            break;
        case 3:
            if(flagPrimerNum && flagSegundoNum)
            {
                sumaR = sumar(numeroA, numeroB);
                restaR = restar(numeroA, numeroB);
                divisionR = dividir(numeroA, numeroB);
                multR = multiplicar(numeroA, numeroB);
                if(numeroA <= 12)
                {
                    factorialAR = factorial(numeroA);
                    todoOk1 = 0;
                }
                else
                {
                    factorialAR = 0;
                    printf("\nError en la operacion factorial\nIngrese un primer operando menor a 12 para poder calcularlo\n\n");
                }
                if(numeroB <= 12)
                {
                    factorialBR = factorial(numeroB);
                    todoOk2 = 0;
                }
                else
                {
                    factorialBR = 0;
                    printf("\nError en la operacion factorial\nIngrese un segundo operando menor a 12 para poder calcularlo\n\n");
                }

                flagMostrarResultados = 1;

                if(todoOk1 == 0 && todoOk2 == 0)
                {
                    printf("\nLas operaciones han sido realizadas.\n\n");
                }
                system("pause");
            }
            else
            {
                printf("\nNo ingreso un operando\n");
                system("pause");
            }
            break;
        case 4:
            if(flagPrimerNum && flagSegundoNum && flagMostrarResultados)
            {
                system("cls");
                printf("  ****************************  \n");
                printf("  *********Resultados*********  \n");
                printf("  ****************************  \n\n");

                mostrarSuma(numeroA, numeroB, sumaR);
                mostrarResta(numeroA, numeroB, restaR);
                if(numeroB == 0)
                {
                    printf("No se puede dividir por cero\n");
                }
                else
                {
                    mostrarDivision(numeroA, numeroB, divisionR);
                }

                mostrarMultiplicacion(numeroA, numeroB, multR);

                if(numeroB < 0 || numeroA < 0)
                {
                    printf("Error en la operacion factorial.\nNo se puede calcular el factorial de un numero negativo\nReintente con un numero positivo\n\n");
                }
                else if (numeroA > 12)
                {
                    printf("Error en la operacion factorial.\nIngrese un primer operando menor\n\n");
                }
                else if (numeroB > 12)
                {
                    printf("Error en la operacion factorial.\nIngrese un segundo operando menor\n\n");
                }
                else
                {
                    mostrarFactorial(numeroA, numeroB, factorialAR, factorialBR);
                }
                system("pause");
            }
            else
            {
                printf("\nError. No ingreso un operando o no realizo las operaciones\n\n");
                system("pause");
            }
            break;
        case 5:
            printf("Confirma salida? s/n: ");
            fflush(stdin);
            scanf("%c", &confirm);
            if(confirm == 's')
            {
                seguir = 'n';
            }
            break;
        }

        system("pause");
    }
    while(seguir == 's');

    return 0;
}
