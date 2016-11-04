#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
int cuadrado_num(int);
void imprime_num(int);

int main()
{

  int (*fun1) (int);
  void (*fun2) (int);

  fun1 = &cuadrado_num;
  fun2 = &imprime_num;

  int var = misterio1(fun1, 3);
  misterio2(fun2, var);
}


int misterio1(int (*fun) (int), int num)
{
    return fun(num);
}

void misterio2(void (*fun) (int), int num)
{
    fun(num);
}

int cuadrado_num(int num)
{
    return num * num;
}

void imprime_num(int num)
{
    printf("Tada: %d\n", num);
}
