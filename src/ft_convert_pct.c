#include "../include/ft_printf.h"

void ft_convert_pct(t_holder *holder)
{
	char ch;

	ch = '%';
	holder->argument = malloc(sizeof(char));
	if(!holder->argument)
		return;
	holder->argument[0] = ch;
	holder->len++;
}
