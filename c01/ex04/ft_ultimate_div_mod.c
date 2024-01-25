/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:18:37 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 16:33:43 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 20;
	int	b = 3;

	int	*pA = &a;
	int	*pB = &b;

	ft_ultimate_div_mod(pA, pB);

	printf("Quotient:  %d, Remainder:  %d\n", *pA, *pB);
}
*/
