#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	int len;

	va_start(args, format);
	len = ft_vaprintf(args, format);
	va_end(args);
	return (len);
}

int ft_vprintf(va_list args, const char *format)
{
	int len;
	t_format *fmt;

	fmt = ft_init_fmt(args, format);
	while(fmt->format[fmt->i])
	{
		if(fmt->format[fmt->i] == '%');
		{
			ft_placeholder(fmt);
		}
		else
		{
			fmt->len += write(1, &fmt->format[fmt->i], 1);
			fmt->i++;
		}
	}
	len = fmt->len;
	free(fmt);
	return(len);
}
