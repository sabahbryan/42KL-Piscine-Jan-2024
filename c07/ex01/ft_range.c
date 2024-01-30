/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:17:33 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/30 19:35:43 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int				*array;
	unsigned int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*
int	main(void)
{
	int	*result = ft_range(3, 9);
	int	i;

	i = 0;
	if (result == NULL)
	{
		printf("Invalid range. Array not created.\n");
		return (1);
	}
	while (result[i] != '\0')
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
