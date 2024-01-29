/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:36:07 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/29 19:07:50 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[9] = {25, 7, 4, 5, 19, 68, 12, 42, 88};
	int	size = 9;
	int	i;

	ft_sort_int_tab(tab, size);
	i = 0;
	printf("Sorted Array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
