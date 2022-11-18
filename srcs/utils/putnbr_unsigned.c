/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:15:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 15:55:46 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void	putnbr_unsigned(unsigned int num)
{
	if (num > 4294967295)
		return ;
	if (num < 10)
	{
		putchar(num + 48);
		return ;
	}
	putnbr_unsigned(num / 10);
	putchar(num % 10 + 48);
}
