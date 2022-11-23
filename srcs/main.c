/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:49:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/23 12:14:04 by tsodre-p         ###   ########.fr       */
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
	write(1, "ft_c\n", 5);
	printf("printf: %c\n", a);
	write(1, "ft_printf: ", 12);
	ft_printf("%c", a);
	printf("\n\n");
	// %s
	write(1, "ft_s\n", 5);
	printf("printf: %s\n", str);
	write(1, "ft_printf: ", 12);
	ft_printf("%s", str);
	printf("\n");
}
