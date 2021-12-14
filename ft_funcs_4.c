/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:00:08 by disle             #+#    #+#             */
/*   Updated: 2021/12/08 16:00:11 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ux(unsigned long int n)
{
	ft_putnbr_ux(n);
	return (ft_hexlen(n));
}

int	ft_p(unsigned long i)
{
	ft_putstr("0x");
	ft_putnbr_x(i);
	return (ft_hexlenp(i) + 2);
}
