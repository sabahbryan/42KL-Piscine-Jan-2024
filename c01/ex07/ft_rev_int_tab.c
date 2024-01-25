/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:30:38 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 16:50:04 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr, size);

	int	i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
