/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:59:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 12:06:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_putnbr(int num)
{
	if (num > 2147483647)
		return ;
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if (num < 10)
	{
		ft_putchar(num + 48);
		return ;
	}
	ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}
