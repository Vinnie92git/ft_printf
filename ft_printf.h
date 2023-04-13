/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:19:16 by vipalaci          #+#    #+#             */
/*   Updated: 2023/03/16 12:22:46 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printnbr(int nbr);
int		ft_printuint(unsigned int nbr);
int		ft_printhex(unsigned int nbr, const char format);
void	ft_putchar_fd(char c, int fd);

#endif
