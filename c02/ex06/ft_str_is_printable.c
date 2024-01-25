/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:30:01 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 19:17:47 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if ((*str < 32) || (*str > 126))
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
	printf("%d\n", ft_str_is_printable("The quick brown fox"));
	printf("%d\n", ft_str_is_printable("	"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("!@#$%^&*()"));
} 
*/
