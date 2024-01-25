/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:06:06 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/24 21:10:22 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[50] = "But I ain't worried ";
	char str2[] = "bout it right now My anaconda don't want";
	char str3[50] = "Keeping dreams alive, ";
	char str4[] = "1999, heroes none unless you got buns";

	printf("Combined Result 1: %s\n", ft_strncat(str1, str2, 17));
	printf("Combined Result 2: %s\n", ft_strncat(str3, str4, 12));
}
*/
