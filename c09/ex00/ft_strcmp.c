/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:49:15 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/24 21:08:53 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
		c++;
	if (s1[c] == s2[c])
		return (0);
	else
	{
		return (s1[c] - s2[c]);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Smooth like butter";
	char str2[] = "like a criminal undercover";
	char str3[] = "Smooth like butter";
	char str4[] = "SMOOTH LIKE BUTTER";

	printf("Comparison Result 1: %d\n", ft_strcmp(str1, str2));
	printf("Comparison Result 2: %d\n", ft_strcmp(str1, str3));
	printf("Comparison Result 3: %d\n", ft_strcmp(str1, str4));
}
*/
