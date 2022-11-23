/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:48:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 14:33:37 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	type(char str, va_list av, unsigned long long *total_len)
{
	if (str == 'c')
		ft_c(av, total_len);
	else if (str == 's')
		ft_s(av, total_len);
	else if (str == 'p')
		ft_p(av, total_len);
	else if (str == 'd' || str == 'i')
		ft_d(av, total_len);
	else if (str == 'u')
		ft_u(av, total_len);
	else if (str == 'x')
		ft_x_X(av, total_len, 'x');
	else if (str == 'X')
		ft_x_X(av, total_len, 'X');
	/*else if (str == '%')
		ft_putchar('%', total_len);*/
}

int	type_check(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd')
		|| (c == 'i') || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int		ft_printf(const char *str, ...)
{
	va_list	av;
	unsigned long long		total_len;
	size_t	i;

	if (!str)
		return (-1);
	va_start(av, str);
	i = 0;
	while (str[i])
	{
		if (str[i] != '%' )
			return (0);
			//put_common_char(str[i], &total_len);
		else if (str[i] == '%' && !type_check(str[i + 1]))
			write(1, "%", 1);
		else if (str[i] == '%' && type_check(str[i + 1]))
		{
			i++;
			type(str[i], av, &total_len);
		}
		i++;
	}
	va_end(av);
	return (total_len);
}
