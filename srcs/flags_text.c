/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_text.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:36:27 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/28 17:05:53 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	flag_c(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}

int	flag_s(char *str)
{
	if (str == 0)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	flag_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
