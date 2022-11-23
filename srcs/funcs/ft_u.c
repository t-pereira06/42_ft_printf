/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:40:21 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 13:41:00 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_u(va_list av, unsigned long long *total_len)
{
	unsigned long long	num;
	unsigned long long	num_len;

	num = va_arg(av, unsigned long long);
	ft_putnbr_unsigned_int(num);
	num_len = ft_length_num(num);
	*total_len += num_len;
}
