#include <stdio.h>
int main()
{
    float c = 3.14;

    float *pc = &c;

    printf("Endereoo de c: %x.\n", &c);

    printf("Endereco para o qual pr aponta: %x.\n", pc);
}