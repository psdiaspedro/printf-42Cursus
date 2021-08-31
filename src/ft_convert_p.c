/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 08:44:00 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/31 08:55:09 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_p(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*address;

	ptr = va_arg(fmt->args, void *);
	if (!ptr)
		return ;
	address = ft_itoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strjoin(HEX_L_PREFIX, address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
