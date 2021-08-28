/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:50:12 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 14:40:35 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void is_spec(t_holder *holder, t_format *fmt)
{
	if(ft_strchr(FORMAT_SPEC, fmt->format[fmt->i]))
	{
		holder->specifier = fmt->format[fmt->i];
		fmt->i++;
	}
	else
	{
		write(1, &fmt->format[fmt->i], 1);
		
	}
	// if(fmt->format[fmt->i] == 'c')
	// if(fmt->format[fmt->i] == 's')
	// if(fmt->format[fmt->i] == 'p')
	// if(fmt->format[fmt->i] == 'i')
	// if(fmt->format[fmt->i] == 'u')
	// if(fmt->format[fmt->i] == 'x')
	// if(fmt->format[fmt->i] == 'X')
	// if(fmt->format[fmt->i] == '%')
}
void ft_placeholder(t_format *fmt)
{
	t_holder *holder;

	fmt->i++;
	holder = ft_init_holder();
	is_spec(holder, fmt);
}
