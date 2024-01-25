/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:15:17 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 17:22:50 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((*str < '0') || (*str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("0123456789"));
	printf("%d\n", ft_str_is_numeric("-987654321"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("Th3 gR34T 35c4p3"));
	printf("%d\n", ft_str_is_numeric("$ug@r #oney |ced Te@!"));
}
*/
