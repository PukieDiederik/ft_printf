/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <drobert-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:36:10 by drobert-          #+#    #+#             */
/*   Updated: 2022/02/25 17:36:11 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>

/*
OPTIONS: cspdiuxX

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

int	parse_option(const char c, va_list list)
{
	// if (c == 'c')
	// 	write(1, &c, 1);
	// if (c == 's');
	// if (c == 'p');
	if (c == 'd' || c == 'i')
		return (flag_di(va_arg(list, int)));
	// if (c == 'u');
	// if (c == 'x');
	// if (c == 'X');
	// if (c == '%');
	// va_arg(list, int);
	return (0);
}
