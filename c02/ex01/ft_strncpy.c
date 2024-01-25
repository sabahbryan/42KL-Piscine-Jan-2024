/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:22:34 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 17:14:53 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Cadet";
	char	dest[] = "Pisciner";
	unsigned int dest_size = sizeof(dest) / sizeof(dest[0]);

	printf("%s\n", dest);
	ft_strncpy(dest, src, sizeof(src) / sizeof(src[0]));
	printf("%s\n", dest);
}
*/
