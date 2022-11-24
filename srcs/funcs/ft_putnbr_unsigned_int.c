/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:15:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/24 14:19:43 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

int	ft_putnbr_unsigned(unsigned int num)
{
	/*if (num > 4294967295)
		return (0);
	if (num < 10)
	{
		ft_putchar(num + 48);
		return (0);
	}
	ft_putnbr_unsigned(num / 10);
	ft_putchar(num % 10 + 48);*/

	char	*str;
	int		len;

	str = ft_itoa_unsigned(num);
	len = ft_putstr(str);
	free(str);
	return (len);
}
