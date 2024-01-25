/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:24:18 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 19:16:15 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
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
	printf("%d\n", ft_str_is_uppercase("KAMEHAMEHA"));
	printf("%d\n", ft_str_is_uppercase("pisciner42@gmail.com"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("THIS IS SPARTA"));
	printf("%d\n", ft_str_is_uppercase("lIfE iS uNfAiR"));
}
*/
