/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:39:06 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/26 12:08:00 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	int	d = 4;
	int	e = 6;
	int	f = 9;
	int	u = 0;
	int	v = 3;
	int	w = -4;

	printf("%d raised by power %d: %d\n", d, u, ft_recursive_power(d, u));
	printf("%d raised by power %d: %d\n", e, v, ft_recursive_power(e, v));
	printf("%d raised by power %d: %d\n", f, w, ft_recursive_power(f, w));
}
