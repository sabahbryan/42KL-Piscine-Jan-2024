/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:52:03 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/30 20:32:55 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			array[i] = min + i;
		*range = array;
		return (i);
	}
}

int	main(void)
{
	int	*result;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&result, 2, 10);
	if (size == -1)
	{
		printf("*MALLOC FAILED*\n");
		return (1);
	}
	else if (size == 0)
	{
		printf("Invalid range. Array not created.\n");
		return (1);
	}
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
