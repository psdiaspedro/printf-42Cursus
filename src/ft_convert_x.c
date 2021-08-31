/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 08:43:46 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/31 14:39:00 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_ux(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*address;

	ptr = va_arg(fmt->args, void *);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base((unsigned long)ptr, HEXA_U_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}

void	ft_convert_x(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*address;

	ptr = va_arg(fmt->args, void *);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
