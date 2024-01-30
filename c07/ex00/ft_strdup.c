/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:17:05 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/30 16:53:52 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i);
	if (!(dest))
		return (NULL);
	return (ft_strcpy(dest, src));
}

/*
int	main(void)
{
	char	original[] = "I'm just Ken!";
	char	*duplicate;

	printf("Original string length: %d\n", ft_strlen(original));

	char	copy[50];
	ft_strcpy(copy, original);
	printf("Copied string: %s\n", copy);

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("*MALLOC FAILED*\n");
		return (1);
	}
	printf("Duplicated string: %s\n", duplicate);
	free (duplicate);
	return (0);
}
*/
