/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:50:07 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/28 18:47:11 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FORMAT_SPEC "cspdiuxX%"

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"

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

int ft_printf(const char *format, ...);
int ft_vprintf(va_list args, const char *format);
void ft_placeholder(t_format *fmt);
void ft_parse(t_format *fmt, t_holder *holder);
void ft_is_spec(t_format *fmt, t_holder *holder);
t_format *ft_init_format(va_list args, const char *format);
t_holder *ft_init_holder();
void ft_convert_s(t_format *fmt, t_holder *holder);
void ft_convert_c(t_format *fmt, t_holder *holder);
void ft_convert_d_i(t_format *fmt, t_holder *holder);
void ft_convert_ux(t_format *fmt, t_holder *h, char *base);
void ft_convert_pct(t_holder *h);
void ft_convert_p(t_format *fmt, t_holder *h);

#endif
