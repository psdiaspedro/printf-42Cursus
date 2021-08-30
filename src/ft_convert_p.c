#include "../include/ft_printf.h"

void ft_convert_p(t_format *fmt, t_holder *holder)
{
	void *ptr;
	char *address;

	ptr = va_arg(fmt->args, void *);
	if(!ptr)
		return ;
	address = ft_uitoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strjoin(HEX_L_PREFIX, address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
