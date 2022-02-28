/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:30:10 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/28 17:01:23 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	flag_di(int c)
{
	char	*str;
	int		len;

	str = ft_itoa(c);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	flag_u(unsigned int c)
{
	char	*str;
	int		len;

	str = ft_itoa_u(c);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	flag_x(unsigned int c)
{
	char	*str;
	int		len;

	str = ft_itoa_x(c);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	flag_x_upper(unsigned int c)
{
	char	*str;
	int		len;

	str = ft_itoa_x_upper(c);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	flag_p(unsigned long long p)
{
	char	*str;
	int		len;

	str = ft_itoa_lx(p);
	len = ft_strlen(str);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str, 1);
	free(str);
	return (len + 2);
}
