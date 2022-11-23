/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:05:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 14:32:42 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_p(va_list av, unsigned long long *total_len)
{
	unsigned int	num;
	unsigned int	num_len;

	num = va_arg(av, unsigned int);
	ft_put_ptr(num);
	num_len = ft_length_num(num);
	*total_len += num_len;
	/*if (num == 0)
	{
		write(1, "0", 1);
		*total_len += 1;
	}
	else
	{
		ft_puthex(num, type);
		ft_hexlen(num);
	}*/
}
