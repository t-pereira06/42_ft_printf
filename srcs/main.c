/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:49:39 by marvin            #+#    #+#             */
/*   Updated: 2022/11/23 15:24:42 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char	a;
	char	*str;
	char	*str2;
	int		i;
	unsigned int	b;
	unsigned int	hex;

	a = 'a';
	str = "string dos deuses";
	str2 = 0;
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
	printf("\n\n");

	// %p
	write(1, "ft_p\n", 5);
	printf("printf: %p\n", &str);
	write(1, "ft_printf: ", 12);
	ft_printf("%p", &str);
	printf("\n\n");

	// %d
	write(1, "ft_d\n", 5);
	printf("printf: %d\n", i);
	write(1, "ft_printf: ", 12);
	ft_printf("%d", i);
	printf("\n\n");

	// %i
	write(1, "ft_i\n", 5);
	printf("printf: %i\n", i);
	write(1, "ft_printf: ", 12);
	ft_printf("%i", i);
	printf("\n\n");

	// %u
	write(1, "ft_u\n", 5);
	printf("printf: %u\n", b);
	write(1, "ft_printf: ", 12);
	ft_printf("%u", b);
	printf("\n\n");

	// %x
	write(1, "ft_x\n", 5);
	printf("printf: %x\n", hex);
	write(1, "ft_printf: ", 12);
	ft_printf("%x", hex);
	printf("\n\n");

	// %X
	write(1, "ft_X\n", 5);
	printf("printf: %X\n", hex);
	write(1, "ft_printf: ", 12);
	ft_printf("%X", hex);
	printf("\n\n");
}
