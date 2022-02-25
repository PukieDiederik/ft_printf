/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:13:29 by pukie             #+#    #+#             */
/*   Updated: 2022/02/25 17:33:02 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		size;

	size = 0;
	va_start(arg_list, str);
	while (*str)
	{
		if (*str == '%')
		{
			size += parse_option(*(str + 1), arg_list);
			str++;
			if (!*str)
				break ;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			size++;
		}
		str++;
	}
	va_end(arg_list);
	return (size);
}

// int main()
// {
// 	ft_printf("digit TEST: %d", 123);
// 	ft_printf("\n");
// 	//printf("%daa%yaa%", 123, "hello");
// }
