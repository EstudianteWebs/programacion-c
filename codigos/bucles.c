#include <stdio.h>

int main()
{
    //BUCLE FOR (entra las veces que se le indica)
    printf("\nBUCLE FOR\n");
    int contador;
    for(contador=0; contador<10; contador++)            //Forma: desde; condicion; incremento (++)/decremento(--)
    {
        printf("Impresion por for: %d \n",contador);
    }



    //BUCLE WHILE (primero verifica la condicion y entra sino no entra)
    printf("\nBUCLE WHILE\n");
    int numero = 1;
    while(numero <= 10)               //dentro de parentesis se condiciona <, >, <=, >=, ==, <>..
    {
        printf("Numeo con while: %d \n",numero);
        numero++;                    //Incrementa de 1 en 1. Es como: numero = numero +1;
    }



    //BUCLE DO-WHILE (entra por lo menos una vez y despues verifica si cumple la condicion)
    printf("\nBUCLE DO-WHILE\n");
    numero = 10;
    do
    {
        printf("Entro a do-while una vez porque aun no verifica, numero = %d \n",numero);
    }while(numero != 10);                  //si es diferente a 10 entra



    //EJEMPLO DE BUCLE ANIDADO
    printf("\nBUCLE FOR ANIDADO\n");
    printf("\t\t Ejemplo tablas de multiplicar hasta el 5 \n");    // \t\t da espacio y/o centra

    int multiplicador;
    int multiplicando;
    int resultado_multiplicacion=0;                     //inicializa variable

    for(multiplicando=1; multiplicando<=5; multiplicando++)
    {
        for(multiplicador=1; multiplicador<=10; multiplicador++)
        {
            resultado_multiplicacion = multiplicando*multiplicador;
            printf("Tabla de %d: %d*%d = %d \n",multiplicando,multiplicando,multiplicador,resultado_multiplicacion);   //variables en orden
        }
    }

    return 0;
}
