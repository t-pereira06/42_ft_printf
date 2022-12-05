/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:48:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/12/02 09:46:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(char str, va_list av)
{
	int		full_len;

	full_len = 0;
	if (str == 'c')
		full_len += ft_putchar(va_arg(av, int));
	else if (str == 's')
		full_len += ft_putstr(va_arg(av, char *));
	else if (str == 'p')
		full_len += ft_put_pointer(va_arg(av, unsigned long long));
	else if (str == 'd' || str == 'i')
		full_len += ft_putnbr(va_arg(av, int));
	else if (str == 'u')
		full_len += ft_putnbr_unsigned(va_arg(av, unsigned int));
	else if (str == 'x')
		full_len += ft_puthex(va_arg(av, unsigned int), str);
	else if (str == 'X')
		full_len += ft_puthex(va_arg(av, unsigned int), str);
	else if (str == '%')
		full_len += write(1, "%", 1);
	return (full_len);
}

int	type_check(int c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd')
		return (1);
	else if (c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	else if (c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	av;
	int		total_len;
	size_t	i;

	if (!str)
		return (-1);
	va_start(av, str);
	i = 0;
	total_len = 0;
	while (str[i])
	{
		if (str[i] != '%' )
			total_len += write(1, &str[i], 1);
		else if (str[i] == '%' && !type_check(str[i + 1]))
			total_len += write(1, "%", 1);
		else if (str[i] == '%')
		{
			i++;
			total_len += type(str[i], av);
		}
		i++;
	}
	va_end(av);
	return (total_len);
}
