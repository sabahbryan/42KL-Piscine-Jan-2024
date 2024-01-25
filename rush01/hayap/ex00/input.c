/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayap <hayap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:26:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/21 18:55:36 by hayap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_numeric(int n);

/*
 * Only allow 16 numbers, and spaces in between each.
 *
 * @param char *str
 *
 * @return int 
 */
int	ft_only(char *str)
{
	char	*ptr;
	int		nbrs;
	int		spaces;
	char	temp;

	if (str == NULL)
	{
		return (0);
	}
	ptr = str;
	nbrs = 0;
	spaces = 0;
	while (*ptr)
	{
		if (*ptr >= '0' && *ptr <= '9')
			nbrs++;
		if (*ptr == ' ')
			spaces++;
		temp = *ptr;
		ptr++;
		if (ft_is_numeric(temp) && ft_is_numeric(*ptr))
			return (0);
	}
	return (nbrs == 16 && spaces == 15);
}

void	ft_base_arr(int arr_num[16], int base_arr[4][4])
{
	int	i;
	int	j;
	int	base;

	i = 0;
	j = 0;
	base = 0;
	while (i < 16)
	{
		base_arr[j][base] = arr_num[i];
		i++;
		base++;
		if (base == 4)
		{
			base = 0;
			j++;
		}
	}
}

void	ft_split(char *str, int arr_num[16])
{
	char	*ptr;
	int		i;

	if (str == NULL || arr_num == NULL)
	{
		return ;
	}
	ptr = str;
	i = 0;
	while (*ptr && i < 16)
	{
		if (ft_is_numeric(*ptr))
		{
			arr_num[i] = *ptr - '0';
			i++;
		}
		ptr++;
	}
}

int	ft_parse_input(char *str, int base_arr[4][4])
{
	int	arr_num[16];

	if (!(ft_only(str)))
		return (0);
	ft_split(str, arr_num);
	ft_base_arr(arr_num, base_arr);
	return (1);
}
