/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:24:34 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 21:29:59 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest1[10];
	char	dest2[10];
	char	dest3[10];

	char	src1[] = "Hello";
	char	src2[] = "World";
	char	src3[] = "123456";

	unsigned int	len1 = ft_strlcpy(dest1, src1, sizeof(dest1));
	unsigned int	len2 = ft_strlcpy(dest2, src2, sizeof(dest2));
	unsigned int	len3 = ft_strlcpy(dest3, src3, sizeof(dest3));

	printf("Length 1: %u, Content: %s\n", len1, dest1);
	printf("Length 2: %u, Content: %s\n", len2, dest2);
	printf("Length 3: %u, Content: %s\n", len3, dest3);
}
*/
