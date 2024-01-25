/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:55:19 by hayap             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:20 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
/*
void	ft_print_2d_ary(int row, int cols, int ary[row][cols])
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < cols)
		{
			ary[i][j] += '0';
			write(1, &ary[i][j], 1);
			if (j != cols - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
*/

void	ft_print_2d_ary(int size, int board[16])
{
	int		i;
	int		j;
	int		base;
	char	nbr;

	i = 0;
	base = 0;
	while (i < 16)
	{
		nbr = board[i] + '0';
		write(1, &nbr, 1);
		write(1, " ", 1);
		i++;
		base++;
		if (base == 4)
		{
			write(1, "\n", 1);
			base = 0;
		}
	}
}
