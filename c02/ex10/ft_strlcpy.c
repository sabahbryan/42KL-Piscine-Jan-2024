/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:17:09 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/28 18:24:35 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	src_length;

	count = 0;
	src_length = 0;
	while (src[src_length] != '\0' && src_length < size - 1)
	{
		dest[count] = src[src_length];
		count++;
		src_length++;
	}
	dest[count] = '\0';
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World!";
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Length of source: %u\n", len);
	printf("Modified destination: %s\n", dest);

	char	src1[] = "Hello";
	char	dest1[] = "World!";
	unsigned int	len1;

	len1 = strlcpy(dest1, src1, sizeof(dest1));
	printf("Length of source: %u\n", len1);
	printf("Modified destination: %s\n", dest1);
}
