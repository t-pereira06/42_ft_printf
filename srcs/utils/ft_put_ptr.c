/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:56:48 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 14:48:00 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

int	ptr_length(uintptr_t num)
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

void	ft_print_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_print_ptr(num / 16);
		ft_print_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

void	ft_put_ptr(unsigned long long ptr)
{
	static unsigned long long	printed_len;

	printed_len = 0;
	ft_putstr("0x");
	printed_len += 2;
	if (ptr == 0)
	{
		ft_putchar('0');
		printed_len += 1;
	}
	else
	{
		ft_print_ptr(ptr);
		printed_len += ptr_length(ptr);
	}
}
