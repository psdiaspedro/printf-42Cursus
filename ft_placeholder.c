/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:50:12 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 17:44:53 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void ft_is_spec(t_format *fmt, t_holder *holder)
{
	if(ft_strchr(FORMAT_SPEC, fmt->format[fmt->i]))
		holder->specifier = fmt->format[fmt->i];
	else
	{
		write(1, &fmt->format[fmt->i], 1);
		fmt->len++;
	}
	fmt->i++;
}

void ft_parse(t_format *fmt, t_holder *holder)
{
	if (holder->specifier == 'c')
		ft_convert_c(fmt, holder);
	else if (holder->specifier == 's')
		ft_convert_s(fmt, holder);
	// else if (h->specifier == 'p')
	// 	ft_convert_p(fmt, h);
	// else if (h->specifier == 'd' || h->specifier == 'i')
	// 	ft_convert_d_i(fmt, h);
	// else if (h->specifier == 'u')
	// 	ft_convert_ux(fmt, h, DECIMAL_BASE);
	// else if (h->specifier == 'x')
	// 	ft_convert_ux(fmt, h, HEXADECIMAL_L_BASE);
	// else if (h->specifier == 'X')
	// 	ft_convert_ux(fmt, h, HEXADECIMAL_U_BASE);
	// else if (h->specifier == 'o')
	// 	ft_convert_ux(fmt, h, OCTAL_BASE);
	// else
	// 	ft_convert_pct(h);
}
void ft_placeholder(t_format *fmt)
{
	t_holder *holder;

	fmt->i++;
	holder = ft_init_holder();
	ft_is_spec(fmt, holder);
	if(holder->specifier)
	{
		ft_parse(fmt, holder);
		fmt->len += write(1, holder->argument, holder->len);
		free(holder->argument);
	}
	free(holder);
}
