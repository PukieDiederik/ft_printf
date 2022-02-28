/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:44:35 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/28 16:47:49 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	calc_num_l(unsigned long n)
{
	int	length;

	length = 1;
	while (n > 15)
	{
		length++;
		n /= 16;
	}
	return (length);
}

char	*ft_itoa_x(unsigned int n)
{
	unsigned long	num;
	int				length;
	char			*num_str;

	num = n;
	length = calc_num_l(n);
	num_str = (char *)malloc((length + 1) * sizeof(char));
	if (num_str == 0)
		return (0);
	num_str[length] = 0;
	while (length > 0)
	{
		*(num_str + length - 1) = "0123456789abcdef"[num % 16];
		num /= 16;
		length--;
	}
	return (num_str);
}
