/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:32:49 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:41 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_input(char ch, va_list arguments)
{
	int	num_bytes;

	num_bytes = 0;
	if (ch == 'c')
	{
		num_bytes += ft_print_c(va_arg(arguments, int));
	}
	else if (ch == 's')
		num_bytes += ft_print_s(va_arg(arguments, char *));
	else if (ch == 'p')
		num_bytes += ft_print_p(va_arg(arguments, void *));
	else if (ch == 'd' || ch == 'i')
		num_bytes += ft_print_d(va_arg(arguments, int));
	else if (ch == 'u')
		num_bytes += ft_print_u(va_arg(arguments, unsigned int));
	else if (ch == 'x')
		num_bytes += ft_print_x(va_arg(arguments, int));
	else if (ch == 'X')
		num_bytes += ft_print_upper_x(va_arg(arguments, int));
	else if (ch == '%')
		num_bytes += ft_print_percentage();
	return (num_bytes);
}

int	ft_printf(const char *placeholders, ...)
{
	va_list	arguments;
	int		i;
	int		num_bytes;

	va_start(arguments, placeholders);
	i = 0;
	num_bytes = 0;
	while (placeholders[i] != '\0')
	{
		if (placeholders[i] != '%')
		{
			ft_putchar_fd(placeholders[i], 1);
			num_bytes += 1;
		}
		else if (placeholders[i + 1] != '\0')
		{
			i++;
			num_bytes += check_input(placeholders[i], arguments);
		}
		i++;
	}
	va_end(arguments);
	return (num_bytes);
}
