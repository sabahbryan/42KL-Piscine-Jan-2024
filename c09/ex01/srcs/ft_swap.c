/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:24:43 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/19 17:14:55 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 1;
	int	b = 2;

	int *pA = &a;
	int *pB = &b;

	printf("%d, %d\n", a, b);
	ft_swap(pA, pB);
	printf("%d, %d\n", a, b);
	return (0);
}
*/
