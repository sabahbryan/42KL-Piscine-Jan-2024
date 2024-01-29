/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:11:49 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 17:58:45 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fib);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	i = -5;
	int	j = 0;
	int	k = 5;
	int	l = 8;

	printf("Fibonacci number at index %d: %d\n", i, ft_fibonacci(i));
	printf("Fibonacci number at index %d: %d\n", j, ft_fibonacci(j));
	printf("Fibonacci number at index %d: %d\n", k, ft_fibonacci(k));
	printf("Fibonacci number at index %d: %d\n", l, ft_fibonacci(l));
}
*/
