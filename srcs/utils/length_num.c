/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:54:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 14:57:04 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

unsigned long long	length_num(unsigned long long num)
{
	unsigned long long	len;

	len = 0;
	if (num < 0)
		num *= -1;
		len++;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
