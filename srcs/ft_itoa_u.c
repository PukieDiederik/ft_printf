/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:29:23 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/28 15:42:14 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_num_l(unsigned long n)
{
	int	length;

	length = 1;
	while (n > 9)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa_u(unsigned int n)
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
		*(num_str + length - 1) = (num % 10) + '0';
		num /= 10;
		length--;
	}
	if (n < 0)
		num_str[0] = '-';
	return (num_str);
}
