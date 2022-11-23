/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:47:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 10:47:22 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_d(va_list av, unsigned long long *total_len)
{
	unsigned long long	num;
	unsigned long long	num_len;

	num = va_arg(av, unsigned long long);
	ft_putnbr_unsigned_int(num);
	num_len = ft_length_num(num);
	*total_len += num_len;
}
