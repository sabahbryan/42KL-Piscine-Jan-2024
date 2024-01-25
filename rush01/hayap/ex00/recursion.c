/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:55:42 by hayap             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:45 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_board_solved(int size, int board[size][size], int sight[size][size]);
void ft_get_aval(int * arr, int pos, int aval_num[4]);
int ft_arrlen(int * board);
int	ft_parse_input(char *str, int base_arr[4][4]);
void	ft_print_2d_ary(int size, int board[16]);
void	ft_base_arr(int arr_num[16], int base_arr[4][4]);
#include <stdio.h>

int get_next_index (int * board)
{
	int	length;
	int i;
	int	count;
	i = 0;
	count = 0;
	length = ft_arrlen(board);

	while(i < length)
	{
		if (board[i] > 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

// int *arr, int pos, int aval_num[4]
void recursion(int num, int *board, int size, int sight[size][size])
{

    int next_index = get_next_index(board);
	if (next_index == 13)
	{
		
 	ft_print_2d_ary(4, board);
	printf("\n");
	}
	
	
    board[next_index] = num;
    int two_d_board[4][4];
    ft_base_arr(board, two_d_board);

    if (!is_board_solved(4, two_d_board, sight) && next_index < (size * size - 1))
    {
        int aval_num[4];
        int length;

        ft_get_aval(board, next_index + 1 , aval_num);
        length = ft_arrlen(aval_num);
		if (next_index == 13)
		{
			
			printf("1: %i\n",aval_num[0]);
			printf("2: %i\n",aval_num[1]);
			printf("3: %i\n",aval_num[2]);
			printf("4: %i\n",aval_num[3]);

		}

        if (length)
        {
            int i = 0;
            while (i < length)
            {
                recursion(aval_num[i], board, size, sight);
                i++;
            }
        }
        board[next_index] = 0;
    }
    else if (!is_board_solved(4, two_d_board, sight))
        board[next_index] = 0;
}


int main (int argc, char *argv[])
{
	int board[16] = {0,0,0,0,
	0,0,0,0,
	0,0,0,0,
	0,0,0,0
	};
	
	
	int aval_num[4];
	int sight[4][4];
	int	size;
	int	i;
	
	
	// int sight[4][4] = {
	// 	{4, 3, 2, 1 },
	// 	{ 1, 2, 2, 2},
	// 	{ 4, 3, 2, 1},
	// 	{ 1, 2, 2, 2}
	// };
	
	i = 0;
	size = 4;
	
	//make sights
	ft_parse_input(argv[1], sight);
	
	//make available numbers
	ft_get_aval(board, 0, aval_num);
	
	
    while (i < ft_arrlen(aval_num)) {
        recursion(aval_num[i], board, size, sight);
		i++;
    }
	
	ft_print_2d_ary(4, board);
	
	return (0);
}