/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:59:57 by disle             #+#    #+#             */
/*   Updated: 2021/12/08 16:00:00 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_c(va_arg(ap, int));
	else if (c == 's')
		i += ft_s(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		i += ft_i_d(va_arg(ap, int));
	else if (c == 'u')
		i += ft_u(va_arg(ap, unsigned int));
	else if (c == 'p')
		i += ft_p(va_arg(ap, unsigned long));
	else if (c == 'x')
		i += ft_x(va_arg(ap, unsigned int));
	else if (c == 'X')
		i += ft_ux(va_arg(ap, unsigned int));
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			len += ft_format(ap, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("\n:or:%i", printf("%c\n", 'a'));
// 	printf("\n:my:%i", ft_printf("%c\n", 'a'));
// 	// printf("\n%i\n", ft_i_d(2147483649));
// 	return (0);
// }