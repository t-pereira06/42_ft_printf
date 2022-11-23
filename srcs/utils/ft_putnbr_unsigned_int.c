/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:15:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 12:06:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_putnbr_unsigned_int(unsigned int num)
{
	if (num > 4294967295)
		return ;
	if (num < 10)
	{
		ft_putchar(num + 48);
		return ;
	}
	ft_putnbr_unsigned_int(num / 10);
	ft_putchar(num % 10 + 48);
}
