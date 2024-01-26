/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:48:11 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/26 22:21:08 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	i = 7;
	int	j = 12;
	int	k = -29;

	printf("%d is prime? %s\n", i, ft_is_prime(i) ? "Y" : "N");
	printf("%d is prime? %s\n", j, ft_is_prime(j) ? "Y" : "N");
	printf("%d is prime? %s\n", k, ft_is_prime(k) ? "Y" : "N");
	return (0);
}
