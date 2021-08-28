/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:50:07 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 17:08:22 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FORMAT_SPEC "cspdiuxX%"

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"

typedef struct s_format
{
	const char	*format;
	va_list		args;
	size_t		i;
	size_t		len;
} t_format;

typedef struct s_holder
{
	const char *argument; //armazena o argumento
	char		specifier; //armazena o specifier
	size_t		len; //len do argumento
} t_holder;


#endif
