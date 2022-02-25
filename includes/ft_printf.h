/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:38:38 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/25 17:35:32 by drobert-         ###   ########.fr       */
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
int	flag_di(int c);

#endif
