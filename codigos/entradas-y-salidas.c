#include <stdio.h>
#include <string.h>       //libreria para cadenas
#define CANTIDAD_LETRAS 100    //variable estatica definida

int main()
{
    /*
      ----------------------------------------------------------
       ESPECIFICADORES DE FORMATO
       ---------------------------------------------------------
     %c                        Imprime un carácter especial
     %d                        Imprime entero decimal con signo
     %u                        Imprime entero decimal sin signo
     %o                        Imprime entero octal con signo
     %ou                      Imprime entero octal sin signo
     %x  %X                 Imprime entero hexadecimal con signo
     %xu  %XU            Imprime entero hexadecimal sin signo
     %f %F                   Imprime real (flotante) con en punto decimal
     %e %E                  Imprime un real (flotante) en natación exponencial
     %g %G                 Imprime un real
     %s %                    Imprime una cadena de caracteres

    */

    /*
    ----------------------------------------
      SECUENCIAS DE ESCAPE
    ----------------------------------------
     \a          Alarma
     \b          Rretroceso
     \f           Avance de página
     \n          Nueva línea
     \r          Retorno de carro
     \t          Tabulación horizontal
     \v         Tabulación vertical
     \'          Comilla simple
     \"         Comilla doble
     \\          Diagonal invertida
     \?         Interrogación literalmente
    */


     //EJEMPLO 1 MOSTRAR LOS QUE ESCRIBIR EL USUARIO
    char su_nombre[CANTIDAD_LETRAS];
    int edad;

    printf("Ingrese su nombre: \n Nombre:");      //  Cambio de línes "\n"
    scanf("%s", &su_nombre);                      //"%s" por ser cadena(conjunto de caracteres) Y & asigna espacio en memoria

    printf("Cual es su edad \? \n Edad:");        // \? es literalmente ?
    scanf("%d",&edad);                            //"%d" es para entero

    printf("Su nombre es: %s \n Y su edad %d \a \n",su_nombre, edad);   //su_nombre reemplaza %s, edad %d y \a es alarma.

    /*
     +NOTA la coma sirve para concatenar (adherir código dinamicamente) y es una coma por cada especificador de formato.
     +IMPORTA EL ORDEN
     */


    return 0;
}
