/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:58:12 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/19 19:02:21 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 3;
	int div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);

	printf("Result		: %d\n", div);
	printf("Remainder	: %d\n", mod);
}
*/
