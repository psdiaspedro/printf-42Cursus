/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:50:07 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 12:50:09 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FORMAT_SPEC "cspdiuxX%"

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_format
{
	const char	*format;
	va_list		args;
	size_t		i;
	size_t		len;
} t_format;

typedef struct s_holder
{
	const char *argument;
	char		specifier;
	size_t		len;
} t_holder;

#endif
