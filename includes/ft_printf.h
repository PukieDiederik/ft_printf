/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:38:38 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/27 21:20:33 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//includes
# include <stdarg.h>

// Regular functions
int	ft_printf(const char *str, ...);
int	parse_option(const char c, va_list list);

// Conversion Functions
int	flag_c(int c);
int	flag_s(char *str);
int	flag_p(char c);
int	flag_di(int c);
int	flag_u(int c);
int	flag_x(int c);
int	flag_percent(int c);

#endif
