#include "../include/ft_printf.h"


void ft_convert_ux(t_format *fmt, t_holder *holder)
{
	void *ptr;
	char *address;

	ptr = va_arg(fmt->args, void *);
	if(!ptr)
		return ;
	address = ft_uitoa_base((unsigned long)ptr, HEXA_U_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}


void ft_convert_x(t_format *fmt, t_holder *holder)
{
	void *ptr;
	char *address;

	ptr = va_arg(fmt->args, void *);
	if(!ptr)
		return ;
	address = ft_uitoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
