/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:18:05 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/27 14:24:44 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	temp;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 10)
	{
		ft_putnbr (nb / 10);
		temp = '0' + (char)(nb % 10);
		ft_putchar (temp);
	}
	if (nb < 10)
	{	
		temp = '0' + (char)(nb % 10);
		ft_putchar (temp);
	}
}
