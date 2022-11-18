/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:59:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 15:12:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../ft_printf.h"

void	putnbr(int num)
{
	if (num > 2147483647)
		return ;
	if (num == -2147483648)
	{
		putchar('-');
		putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		putchar('-');
		num = num * -1;
	}
	if (num < 10)
	{
		putchar((num + 48));
		return ;
	}
	putnbr((num / 10));
	putchar(num % 10 + 48);
}
