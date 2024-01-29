/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:32:20 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 18:07:26 by bryaloo          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	j;

	j = nb;
	if (j < 2)
		return (2);
	while (!ft_is_prime(j))
		j++;
	return (j);
}

/*
#include <stdio.h>

int	main(void)
{
	int	next;

	next = 100000;
	printf("Next prime after %d: %d\n", next, ft_find_next_prime(next));
}
*/
