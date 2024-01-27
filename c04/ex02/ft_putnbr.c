/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:49:02 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 22:23:40 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

/*
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 12345;
	num2 = -9876;
	num3 = -2147483648;
	ft_putnbr(num1);
	write(1, "\n", 1);
	ft_putnbr(num2);
	write(1, "\n", 1);
	ft_putnbr(num3);
	write(1, "\n", 1);
}
*/
