/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:24:34 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 19:03:01 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	src_length;

	count = 0;
	src_length = 0;
	while (src[count] != '\0' && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World!";
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Length of source: %u\n", len);
	printf("Modified destination: %s\n", dest);
}
*/
