#include "../include/ft_printf.h"

void ft_convert_d_i(t_format *fmt, t_holder *holder)
{
	long int arg;
	int sign;

	sign = -1;
	arg = va_arg(fmt->args, int);
	if(arg < 0)
		sign *= -1;
	

	return ;
}
