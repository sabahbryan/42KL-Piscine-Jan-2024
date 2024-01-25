/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:33:59 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 22:19:30 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return size + src_len;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return dest_len + src_len;
}

void    doc_strlcat(void)
{
    char    dest[20] = "Hello";
    char    *src;
    unsigned int    res;
    unsigned int    size;

    src = "World";
    size = 4;
    printf("\nExpected:\nDest Before: %s\n", dest);
    res = strlcat(dest, src, size);
    printf("Dest After: %s\nSrc: %s\n", dest, src);
    printf("Size: %i\nRes: %u\n", size, res);
}

void    test_strlcat(void)
{
    char    dest[20] = "Hello";
    char    *src;
    unsigned int    res;
    unsigned int    size;

    src = "World";
    size = 4;
    printf("\nft_strlcat:\nDest Before: %s\n", dest);
    res = ft_strlcat(dest, src, size);
    printf("Dest After: %s\nSrc: %s\n", dest, src);
    printf("Size: %i\nRes: %u\n\n", size, res);
}

int    main(void)
{
    doc_strlcat();
    test_strlcat();
    return (0);
}
