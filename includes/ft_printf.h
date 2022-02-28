/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:38:38 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/28 16:58:21 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//includes
# include <stdarg.h>

// Regular functions
int		ft_printf(const char *str, ...);
int		parse_option(const char c, va_list list);

// Conversion Functions
int		flag_c(int c);
int		flag_s(char *str);
int		flag_p(unsigned long long p);
int		flag_di(int i);
int		flag_u(unsigned int i);
int		flag_x(unsigned int i);
int		flag_x_upper(unsigned int i);
int		flag_percent(void);

// Utils
char	*ft_itoa_u(unsigned int n);
char	*ft_itoa_x(unsigned int n);
char	*ft_itoa_x_upper(unsigned int n);
char	*ft_itoa_lx(unsigned long n);

#endif
