/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:21:47 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 17:49:04 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = " ---+--+1234ab567";
	str2 = "\f\n\r\t\v +-+-+-42069";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	return (0);
}
*/
