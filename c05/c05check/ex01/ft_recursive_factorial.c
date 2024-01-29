/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:30:58 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 17:57:14 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	num1 = 6;
	int	num2 = 0;
	int	num3 = -5;

	printf("Factorial of %d: %d\n", num1, ft_recursive_factorial(num1));
	printf("Factorial of %d: %d\n", num2, ft_recursive_factorial(num2));
	printf("Factorial of %d: %d\n", num3, ft_recursive_factorial(num3));
}
*/
