/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:51:40 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 10:47:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_c(va_list av, unsigned long long *total_len)
{
	char	c;

	c = va_arg(av, char);
	write(1, &c, 1);
	*total_len += 1;
}
