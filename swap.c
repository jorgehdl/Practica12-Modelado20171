#include<stdio.h>

void swap(int* a, int* b) //se declara el metodo swap que recibe dos apuntadores a int
{
    int temp = *a; //se guarda en la variable temp el apuntador al primer int
    *a = *b; //se asigna el apuntador del primer int al segundo
    *b = temp; //en el segundo int guardamos el apuntador al primero, que habiamos guardado en la primera linea
}

main()
{
	int x = 42; //se declaran dos ints
	int y = 17;
	printf("a=%d, b=%d\n", x, y); //se imprime el valor original
	swap(&x, &y); //se utiliza la funcion swap con apuntadores
	printf("a=%d, b=%d\n", x, y); //se imprime el valor cambiado
}