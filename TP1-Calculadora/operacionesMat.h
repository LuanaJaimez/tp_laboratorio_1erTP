#ifndef OPERACIONESMAT_H_INCLUDED
#define OPERACIONESMAT_H_INCLUDED
#include "operacionesMat.h"

/** \brief Realiza la suma de un numero
 *
 * \param numeroA int
 * \param numeroB int
 * \return resultado int, devuelve el resultado de la operacion realizada
 *
 */
int sumar(int numeroA, int numeroB);


/** \brief Realiza la resta de un numero
 *
 * \param numeroA int
 * \param numeroB int
 * \return resultado int, devuelve el resultado de la operacion realizada
 *
 */
int restar(int numeroA, int numeroB);


/** \brief Realiza la division de un numero
 *
 * \param numeroA int
 * \param numeroB int
 * \return resultado float, devuelve el resultado de la operacion realizada
 *
 */
float dividir(int numeroA, int numeroB);


/** \brief Realiza la mutiplicacion de un numero
 *
 * \param numeroA int
 * \param numeroB int
 * \return resultado int, devuelve el resultado de la operacion realizada
 *
 */
int multiplicar(int numeroA, int numeroB);


/** \brief Calcula el factorial de un numero
 *
 * \param a int
 * \return fact int
 *
 */
int factorial(int a);

#endif // OPERACIONESMAT_H_INCLUDED

