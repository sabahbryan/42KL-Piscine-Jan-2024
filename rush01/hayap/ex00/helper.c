/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:08:00 by yilim             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:31 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	val;
	int	negative;

	val = 0;
	negative = 0;
	if (*str == '+' || *str == '-')
	{
		negative = (*str == '-');
		str++;
		if (*str == '+' || *str == '-')
			return (0);
		str--;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			val *= 10;
			val += (*str - '0');
		}
		str++;
	}
	if (negative)
		val *= -1;
	return (val);
}

int	ft_is_numeric(int n)
{
	return (n >= '0' && n <= '9');
}

void	ft_putarr(int *arr, int size)
{
	int		i;
	char	nbr;

	i = 0;
	while (i < size)
	{
		nbr = arr[i] + '0';
		write(1, &nbr, 1);
		if (i < size - 1)
			write(1, ", ", 2);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_position(int row, int cols, int nbr_of_cols)
{
	return (row * nbr_of_cols + cols);
}

int	ft_arrlen(int *arr)
{
	int	*ptr;
	int	i;

	ptr = arr;
	i = 0;
	while (*ptr)
	{
		i++;
		ptr++;
	}
	return (i);
}
