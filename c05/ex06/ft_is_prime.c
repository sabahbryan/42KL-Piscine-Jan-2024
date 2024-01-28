/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:48:11 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 18:06:48 by bryaloo          ###   ########.fr       */
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

/*
#include <stdio.h>

int	main(void)
{
	int	i = 7;
	int	j = 12;
	int	k = -29;

	if (ft_is_prime(i))
		printf("%d is prime? Y\n", i);
	else
		printf("%d is prime? N\n", i);
	if (ft_is_prime(j))
		printf("%d is prime? Y\n", j);
	else
		printf("%d is prime? N\n", j);
	if (ft_is_prime(k))
		printf("%d is prime? Y\n", k);
	else
		printf("%d is prime? N\n", k);
	return (0);
}
*/
