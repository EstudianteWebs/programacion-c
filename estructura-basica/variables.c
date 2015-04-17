#include <stdio.h>

int main()
{
    //DATOS FLOTANTES
    float decimal_corto = 1.22;                 // 4 bytes (32 BITS)
    double decimal_medio = 5.625254;            // 8 bytes (64 BITS)
    long double decimal_largo = 9.65325789;     //10 bytes (80 BITS)

    //DATOS CON NUMEROS ENTEROS
    int numero_entero =  656;                   //escribe numeros enteros (sin punto decimal)
    long numero_entero_largo = 656562562;       //escribe numero enteros largos

    //DATOS PARA ESCRIBIR LETRAS
    char letra_sola = 's';                      //se usa el simbolo (') para un caracter
    string palabra_completa = "hola a todos";   //se usa (") para oraciones o palabras

    return 0;
}

