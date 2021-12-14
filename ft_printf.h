/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:59:50 by disle             #+#    #+#             */
/*   Updated: 2021/12/08 15:59:52 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		ft_intlen(long long int n);
int		ft_hexlen(long int n);
int		ft_hexlenp(unsigned long int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_s(char *str);
int		ft_c(char c);
void	ft_putnbr(int i);
void	ft_putnbr_u(unsigned int i);
int		ft_i_d(int i);
int		ft_u(unsigned int i);
void	ft_putnbr_x(unsigned long int n);
void	ft_putnbr_ux(unsigned long int n);
int		ft_x(unsigned long int n);
int		ft_ux(unsigned long int n);
int		ft_p(unsigned long i);
int		ft_format(va_list ap, char c);
int		ft_printf(const char *format, ...);

#endif
