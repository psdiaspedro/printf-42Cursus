/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 08:43:50 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/31 08:44:27 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_u(t_format *fmt, t_holder *holder, char *base)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = va_arg(fmt->args, unsigned int);
	ptr = ft_uitoa_base((unsigned long)nbr, base);
	holder->argument = malloc(sizeof(char) * ft_strlen(ptr));
	if (!holder->argument)
		return ;
	ft_strlcpy(holder->argument, ptr, ft_strlen(ptr) + 1);
	holder->len = ft_strlen(holder->argument);
	free(ptr);
}
