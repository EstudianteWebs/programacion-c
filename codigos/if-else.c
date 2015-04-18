#include <stdio.h>
#define NUMERO_LETRAS 100

int main()
{
    //EJEMPLO DE IF
    //el asterisco es un puntero(veremos mas adelante) asigna la cade a un espacio en memoria
    char *cadena="hola";

    if(cadena=="hola")
    {
        printf("Cadena si es igual a %s \n",cadena);     //%s es para cadenas
    }



    //EJEMPLO IF-ELSE
    //si no cumple se va a else ya que no hay otra condicion
    if(cadena=="ALGO DIFERENTE")
    {
        printf("La cadena es = ALGO DIFEREBTE");     //Imprimira si cumple
    }else{
        printf("No cumplio ninguna condicion \n");     //imprimira si no cumple
    }



    //EJEMPLO IF-ELSEIF
    if(cadena=="hola" && 1==1)
    {
        printf("Es hola ya no usara else-if ni else \n");           //Imprimira si cumple
    }else if(cadena != "hola"){
        printf("Es diferente a hola uso condicion else if \n");     //imprimira si no cumple
    }else{
        printf("aqui no hay condicion solo lo hace si no cumple ninguna \n");
    }


    return 0;
}
