/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:10:31 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 17:18:30 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'))
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
	printf("%d\n", ft_str_is_alpha("Arigato"));
	printf("%d\n", ft_str_is_alpha("\\?$*'MaRViN'*S?\\"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Th3 R41n 1n 5P41n"));
	printf("%d\n", ft_str_is_alpha("gozaimasu"));
}
*/
