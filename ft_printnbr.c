/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:22:31 by vipalaci          #+#    #+#             */
/*   Updated: 2023/03/16 12:22:54 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_printnbr(int nbr)
{
	int	len;

	len = ft_len(nbr);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_putnbr(nbr);
	return (len);
}
