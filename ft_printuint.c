/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:25:34 by vipalaci          #+#    #+#             */
/*   Updated: 2023/03/16 12:45:52 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printunsigned(unsigned int n)
{
	if (n > 9)
		ft_printuint(n / 10);
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		return ;
	}
	ft_putchar_fd((n % 10) + '0', 1);
}

int	ft_printuint(unsigned int nbr)
{
	int	len;

	len = 0;
	ft_printunsigned(nbr);
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
