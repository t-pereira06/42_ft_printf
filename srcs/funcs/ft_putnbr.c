/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:59:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/24 14:19:18 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

int	ft_putnbr(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	len = ft_putstr(str);
	free(str);
	return (len);
}
