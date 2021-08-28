#include "ft_printf.h"

void ft_parse(t_format *fmt, t_holder *holder)
{
	if(ft_strchr(FORMAT_SPEC, holder->specifier))
	{
		holder->specifier = fmt->format[fmt->i];
		fmt->i++;
	}
	else
	{

	}
}

void ft_placeholder(t_format *fmt)
{
	t_holder *holder;

	fmt->i++;
	holder = ft_init_holder();
	ft_parse(fmt, holder);
}
