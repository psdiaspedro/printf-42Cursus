#include "../include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	unsigned int a= -4;

	puts("*********TESTE CHAR**************\n");
	ft_printf("print na letra %c: %c\n", 'c', 'c');

	puts("*********TESTE STRING**************\n");
	ft_printf("esse é o %s do %cedro e do igo%c! %s!\n", "printf", 'P', 'r', "Finalmente");

	puts("*********TESTE NUMEROS**************\n");
	ft_printf("Min int: ¨%d\n Max int: %i\n", -2147483648, 2147483647);
	ft_printf("valor da variavel a: %d\n", a);

	puts("*********TESTE UNSIGNED INT**************\n");
	ft_printf("Max unsigned int: ¨%u\n", 4294967295);

	puts("*********TESTE ENDEREÇO**************\n");
	ft_printf("Endereço: %p\n", &a );

	puts("*********TESTE CONVERTER PARA HEXADECIMAL**************\n");
	ft_printf("DECIMAL: %d\n HEXADECIMAL: %x\n HEXADECIMAL: %X\n", 2147483647, 2147483647, 2147483647);

	puts("***********PRINTAR PORCENTAGEM**************\n");
	ft_printf("PORCENTAGEM: %%\n");

	return (0);
}

