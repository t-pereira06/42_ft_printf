/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:49:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 15:53:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char	a;
	char	*str;
	int		i;
	unsigned int	b;
	unsigned int	hex;

	a = 'a';
	str = "string";
	i = 42;
	b = 4294967295;
	hex = 45632123;

	// %c
	printf("printf: %c\n", a);
	printf("ft_printf:");
	ft_printf("%c", a);
	// %s

}
