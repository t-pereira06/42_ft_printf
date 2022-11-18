/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:56:48 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 15:03:43 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../ft_printf.h"

unsigned long long	ptr_length(unsigned long long num)
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

void	ft_print_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

unsigned long long	ft_put_ptr(unsigned long long ptr)
{
	unsigned long long	printed_len;

	printed_len = 0;
	printed_len += write(1, "0x", 2);
	if (ptr == 0)
		printed_len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		printed_len += ft_ptr_len(ptr);
	}
	return (printed_len);
}
