/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:24:59 by vipalaci          #+#    #+#             */
/*   Updated: 2023/03/16 12:25:02 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}
