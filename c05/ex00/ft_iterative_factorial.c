/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:47:44 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 17:21:01 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	num1 = 5;
	int	num2 = 0;
	int	num3 = -3;

	printf("Factorial of %d: %d\n", num1, ft_iterative_factorial(num1));
	printf("Factorial of %d: %d\n", num2, ft_iterative_factorial(num2));
	printf("Factorial of %d: %d\n", num3, ft_iterative_factorial(num3));
}
