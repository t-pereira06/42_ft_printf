/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:51:19 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/29 11:12:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

unsigned long long	ft_put_pointer(unsigned long long ptr);
int					ft_putchar(char a);
int					ft_putnbr_unsigned(unsigned int num);
int					ft_putnbr(int num);
int					ft_putstr(char *str);
int					ft_printf(const char *str, ...);
int					ft_puthex(unsigned int num, const char format);
char				*ft_itoa_unsigned(unsigned int n);
char				*ft_itoa(int n);

#endif
