/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:45:11 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 18:27:45 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_convert_s(t_format *fmt, t_holder *holder)
{
	char *string;
	string = ft_strdup(va_arg(fmt->args, char *));
	if(!string)
		return ;
	holder->argument = malloc(sizeof(char) * (ft_strlen(string) + 1))
	if(!holder->argument)
		return ;
	ft_strlcpy(holder->argument, string, ft_strlen(string) + 1);
	holder->len = ft_strlen(holder->argument);
	free(string);
}
