/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:58:55 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/24 21:12:18 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	haystack[] = "I wanna be the very best, like no one ever was.";
	char	needle1[] = "best";
	char	needle2[] = "worst";

	char	*result1 = ft_strstr(haystack, needle1);
	char	*result2 = ft_strstr(haystack, needle2);

	if (result1 != NULL)
		printf("Substring \"%s\" found.\n", needle1);
	else
		printf("Error: \"%s\" not found.\n", needle1);

	if (result2 != NULL)
		printf("Substring \"%s\" found.\n", needle2);
	else
		printf("Error: \"%s\" not found.\n", needle2);
}
*/
