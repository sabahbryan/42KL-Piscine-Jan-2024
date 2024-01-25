/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:29:48 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 19:21:58 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	unsigned int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if (str[u] >= 'a' && str[u] <= 'z')
		{
			str[u] = str[u] - 32;
		}
		u++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "where there's a will,";
	char	str2[] = "ThErE iS a WaY!";
	char	str3[] = "";
	char	str4[] = "33r0r a0a";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
}
*/
