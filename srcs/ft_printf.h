/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:51:19 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 11:47:05 by tsodre-p         ###   ########.fr       */
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

unsigned long long	ft_length_num(unsigned long long num);
unsigned long long	ft_put_ptr(unsigned long long ptr);
void	ft_putchar(char a);
void	ft_putnbr_unsigned_int(unsigned int num);
void	ft_putnbr(int num);
void	ft_putstr(char *str);
int		ft_printf(const char *str, ...);
void	ft_c(va_list av, unsigned long long *total_len);
void	ft_s(va_list av, unsigned long long *total_len);
void	ft_p(va_list av, unsigned long long *total_len, int type);
void	ft_d(va_list av, unsigned long long *total_len);
//void	ft_i(va_list av, unsigned long long *total_len);
//void	ft_u(va_list av, unsigned long long *total_len);
//void	ft_x(va_list av, unsigned long long *total_len);
//void	ft_X(va_list av, unsigned long long *total_len);
//void	ft_percent(unsigned long long *total_len);

#endif
