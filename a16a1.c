#include <stdio.h>
#include <stdlib.h>
#include "cmake-build-debug/a16a1.h"
//#include "a16a1.h"

int valor_int_a;
int valor_int_b;

int menu (){
    int resultado;
    float resultado_div;
    double resultado_cbrt;
    int teste=0;
    printf("Digite qual operação deseja realizar: \n");
    printf("1- Soma;\n2- Subtração;\n3- Divisão;\n4- Multiplicação;");
    printf("\n5- Resto de divisão\n6- Potência base 2\n7- Raiz quadrada\n8- Raiz cúbica\n");
    scanf("\n%d", &teste);
    printf("%d", teste);
    switch (teste){
        case 1:
            printf("Selecionou a função SOMA.");
            resultado = somar(valor_int_a, valor_int_b);
            printf("\nO resultado da soma foi de: %d\n", resultado);
            break;
        case 2:
            printf("Selecionou a função SUBTRAÇÃO.");
            resultado = subtrair(valor_int_a, valor_int_b);
            printf("\nO resultado da subtração foi de: %d", resultado);
            break;
        case 3:
            printf("Selecionou a função DIVISÃO.");
            resultado_div = dividir(valor_int_a, valor_int_b);
            printf("\nO resultado da divisão foi de: %f", resultado_div);
            break;

        case 4:
            printf("Selecionou a função MULTIPLICAÇÃO.");
            resultado = multiplicar(valor_int_a, valor_int_b);
            printf("\nO resultado da Multiplicação foi de: %d", resultado);
            break;
        case 5:
            printf("Selecionou a função RESTO DA DIVISÃO.");
            resultado = resto(valor_int_a, valor_int_b);
            printf("\nO resultado do Resto da Divisão foi de: %d", resultado);
            break;
        case 6:
            printf("Selecionou a função POTÊNCIA DE BASE 2.");
            resultado = potencia_quadrada(valor_int_a);
            printf("\nO resultado da potência do valor 1 foi de: %d", resultado);
            resultado = potencia_quadrada(valor_int_b);
            printf("\nO resultado da potência do valor 2 foi de: %d", resultado);
            break;
        case 7:
            printf("Selecionou a função RAIZ QUADRADA.\n");
            resultado_cbrt = raiz_quadrada(valor_int_a);
            printf("\nO resultado da raiz do valor 1 foi de: %lf", resultado_cbrt);
            resultado_cbrt = raiz_quadrada(valor_int_b);
            printf("\nO resultado da raiz do valor 2 foi de: %lf", resultado_cbrt);
            break;
        case 8:
            printf("Selecionou a função RAIZ CÚBICA.\n");
            resultado_cbrt = raiz_cubica(valor_int_a);
            printf("\nO resultado da raiz do valor 1 foi de: %lf", resultado_cbrt);
            resultado_cbrt = raiz_cubica(valor_int_b);
            printf("\nO resultado da raiz do valor 2 foi de: %lf", resultado_cbrt);
    }
    return (0);
}

int main (int argc, char **argv){
    int soma=0;
    int x;
    valor_int_a = atoi (argv[x+1]);
    valor_int_b = atoi (argv[x+2]);
    menu();
    return (0);
}




//
// Created by faoro on 25/06/2020.
//

