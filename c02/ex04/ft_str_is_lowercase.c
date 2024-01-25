/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:54:05 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 17:24:26 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
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
	printf("%d\n", ft_str_is_lowercase("bonjour"));
	printf("%d\n", ft_str_is_lowercase("#blessedup"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("264142069"));
	printf("%d\n", ft_str_is_lowercase("Selamat pagi"));
}
*/
