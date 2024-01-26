/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:11:18 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/26 11:46:43 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	a = 2;
	int	b = 3;
	int	c = 5;
	int	x = 0;
	int	y = 3;
	int	z = -2;

	printf("%d raised by power %d: %d\n", a, x, ft_iterative_power(a, x));
	printf("%d raised by power %d: %d\n", b, y, ft_iterative_power(b, y));
	printf("%d raised by power %d: %d\n", c, z, ft_iterative_power(c, z));
}
