/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:47:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 11:43:38 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_d(va_list av, unsigned long long *total_len)
{
	unsigned int		num;
	unsigned long long	num_len;

	num = va_arg(av, unsigned int);
	ft_putnbr_unsigned_int(num);
	num_len = ft_num_len(num);
	*total_len += num_len;
}

void	ft_putnbr_unsigned_int(unsigned int n)
{
	if (n > 4294967295)
		return ;
	if (n < 10)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr_unsigned_int(n / 10);
	ft_putchar(n % 10 + 48);
}
