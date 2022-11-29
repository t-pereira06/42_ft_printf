/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:56:48 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/29 16:00:26 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_length(uintptr_t num)
{
	unsigned long long	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_print_pointer(uintptr_t num)
{
	if (num >= 16)
	{
		ft_print_pointer(num / 16);
		ft_print_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

unsigned long long	ft_put_pointer(unsigned long long ptr)
{
	int	printed_len;

	printed_len = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		printed_len += 5;
	}
	else
	{
		ft_putstr("0x");
		printed_len += 2;
		ft_print_pointer(ptr);
		printed_len += pointer_length(ptr);
	}
	return (printed_len);
}
