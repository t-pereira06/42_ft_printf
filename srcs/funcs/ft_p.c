/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:05:11 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 15:43:18 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_p(va_list av, unsigned long long *total_len)
{
	unsigned long	num;
	unsigned long	num_len;

	num = va_arg(av, unsigned long long);
	ft_put_ptr(num);
	num_len = ft_length_num(num);
	*total_len += num_len;
}
