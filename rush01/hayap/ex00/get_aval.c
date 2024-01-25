/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_aval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:55:23 by hayap             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:24 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	get_row(int *arr, int *aval_num, int pos);
void	get_col(int *arr, int *aval_num, int pos);
void	second_part(int *nbr_arr, int *res, int *aval_num);

int	arr_len(int *arr)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while ((arr[i] != 0) && i < 4)
	{
		i++;
		length++;
	}
	return (length);
}

int	is_nbr_present(int arr[], int size, int nbr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == nbr)
			return (1);
		i++;
	}
	return (0);
}

void	arr_cmb(int arr1[], int arr2[], int res[])
{
	int	size1;
	int	size2;
	int	i;
	int	j;

	size1 = arr_len(arr1);
	size2 = arr_len(arr2);
	i = 0;
	while (i < size1)
	{
		res[i] = arr1[i];
		i++;
	}
	j = 0;
	while (j < size2)
	{
		if (!is_nbr_present(res, arr_len(res), arr2[j]))
		{
			res[i] = arr2[j];
			i++;
		}
		j++;
	}
	res[i] = '\0';
}

void	ft_get_aval(int *arr, int pos, int aval_num[4])
{
	int	row[4];
	int	col[4];
	int	nbr_arr[4];
	int	res[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		nbr_arr[i] = i + 1;
		i++;
	}
	get_row(arr, row, pos);
	get_col(arr, col, pos);
	arr_cmb(row, col, res);
	second_part(nbr_arr, res, aval_num);
}
