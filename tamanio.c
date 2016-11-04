#include<stdio.h>

main()
{
    printf("El tipo short tiene tamano %d \n", (int)sizeof(short)); //Se imprime el tamano del tipo short
    printf("El tipo int tiene tamano %d \n", (int)sizeof(int)); //Se imprime el tamano del tipo int
    printf("El unsigned int tiene tamano %d \n", (int)sizeof(unsigned int)); //Se imprime el tamano de un unsigned int
    printf("El apuntador a int tiene tamano %d \n", (int)sizeof(int*)); //Se imprime el tamano de un apuntador a inr
    printf("El tipo char tiene tamano %d \n", (int)sizeof(char)); //Se imprime el tamano del tipo char
    printf("El tipo float tiene tamano %d \n", (int)sizeof(float)); //Se imprime el tamano del tipo float
    printf("El tipo double tiene tamano %d \n", (int)sizeof(double)); //Se imprime el tamano del tipo double
}