/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:55:14 by hayap             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:15 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	check_row_left(int size, int board[size][size], int y, int sight)
{
	int	counter;
	int	temp;
	int	x;

	counter = 0;
	temp = 0;
	x = 0;
	while (x < 4)
	{
		if (temp < board[y][x])
		{
			temp = board[y][x];
			counter++;
		}
		x++;
	}
	return (counter == sight);
}

int	check_row_right(int size, int board[size][size], int y, int sight)
{
	int	counter;
	int	temp;
	int	x;

	counter = 0;
	temp = 0;
	x = 3;
	while (x >= 0)
	{
		if (temp < board[y][x])
		{
			temp = board[y][x];
			counter++;
		}
		x--;
	}
	return (counter == sight);
}

int	check_col_up(int size, int board[size][size], int x, int sight)
{
	int	counter;
	int	temp;
	int	y;

	counter = 0;
	temp = 0;
	y = 0;
	while (y < 4)
	{
		if (temp < board[y][x])
		{
			temp = board[y][x];
			counter++;
		}
		y++;
	}
	return (counter == sight);
}

int	check_col_down(int size, int board[size][size], int x, int sight)
{
	int	counter;
	int	temp;
	int	y;

	counter = 0;
	temp = 0;
	y = 3;
	while (y >= 0)
	{
		if (temp < board[y][x])
		{
			temp = board[y][x];
			counter++;
		}
		y--;
	}
	return (counter == sight);
}

int	is_board_solved(int size, int board[size][size], int sight[size][size])
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (i < 4)
	{
		counter += check_col_up(4, board, i, sight[0][i]);
		counter += check_col_down(4, board, i, sight[1][i]);
		counter += check_row_left(4, board, i, sight[2][i]);
		counter += check_row_right(4, board, i, sight[3][i]);
		i++;
	}
	return (counter == size * size);
}
