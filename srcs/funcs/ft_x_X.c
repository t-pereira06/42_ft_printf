/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:47:07 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 13:52:20 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_x_X(va_list av, unsigned long long *total_len, int type)
{
	unsigned int	num;

	num = va_arg(av, unsigned int);
	if (num == 0)
	{
		write(1, "0", 1);
		*total_len += 1;
	}
	else
	{
		ft_puthex(num, type);
		ft_hexlen(num);
	}
}
