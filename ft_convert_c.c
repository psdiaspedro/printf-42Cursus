/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:50:30 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 17:19:08 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_convert_c(t_format *fmt, t_holder *holder)
{
	char ch;

	ch = va_arg(fmt->args, char);
	holder->argument = malloc(sizeof(char));
	if(!holder->argument)
		return;
	holder->argument = ch;
	holder->len++;
}
