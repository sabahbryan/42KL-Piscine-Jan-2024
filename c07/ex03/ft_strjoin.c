/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:38:09 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/31 13:48:25 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_create(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		z;
	char	*str;

	str = ft_str_create(size, strs, sep);
	x = -1;
	z = 0;
	while (++x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			str[z++] = strs[x][y];
			y++;
		}
		y = 0;
		while (sep[y] && x != size - 1)
		{
			str[z++] = sep[y];
			y++;
		}
	}
	str[z] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*strings[] = {"Hello", "World", "C", "Programming"};
	char	*separator = "_";
	char	*result = ft_strjoin(4, strings, separator);

	if (result == NULL)
	{
		printf("*MALLOC FAILED*\n");
		return (1);
	}
	printf("Concatenated string: %s\n", result);
	free (result);
	return (0);
}
*/
