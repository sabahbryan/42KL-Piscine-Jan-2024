/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:50:32 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 18:06:11 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	if (nb > 0)
	{
		while (s * s <= nb)
		{
			if (s * s == nb)
				return (s);
			if (s > 46340)
				return (0);
			s++;
		}
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 25;
	int	b = -16;
	int	c = 8;

	printf("sqrt %d = %d\n", a, ft_sqrt(a));
	printf("sqrt %d = %d\n", b, ft_sqrt(b));
	printf("sqrt %d = %d\n", c, ft_sqrt(c));
}
*/
