/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:20:30 by yilim             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:28 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_nbr_present(int arr[], int size, int nbr);
int	arr_len(int *arr);

void	get_row(int *arr, int *aval_num, int pos)
{
	int	num_col;
	int	i;
	int	j;

	num_col = 4;
	i = 0;
	j = 0;
	while (i < 16)
	{
		if (i / num_col == pos / num_col && (arr[i] >= 1 && arr[i] <= 4))
		{
			aval_num[j] = arr[i];
			j++;
		}
		i++;
	}
	aval_num[j] = '\0';
}

void	get_col(int *arr, int *aval_num, int pos)
{
	int	num_col;
	int	i;
	int	j;

	num_col = 4;
	i = 0;
	j = 0;
	while (i < 16)
	{
		if (i % num_col == pos % num_col && arr[i] >= 1 && arr[i] <= 4)
		{
			aval_num[j] = arr[i];
			j++;
		}
		i++;
	}
	aval_num[j] = '\0';
}

void	second_part(int *nbr_arr, int *res, int *aval_num)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < arr_len(nbr_arr))
	{
		if (!is_nbr_present(res, arr_len(res), nbr_arr[j]))
		{
			aval_num[i] = nbr_arr[j];
			i++;
		}
		j++;
	}
	aval_num[i] = '\0';
}
