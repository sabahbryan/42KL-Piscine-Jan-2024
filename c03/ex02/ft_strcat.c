/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:37:12 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/24 21:09:35 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[50] = "I don't know about you, ";
	char str2[] = "but I'm feeling 22";
	char str3[50] = "Everything will be alright ";
	char str4[] = "if you keep me next to you";
	char str5[50] = "You don't know about me, ";
	char str6[] = "but I'll bet you want to";
	char str7[50] = "Everything will be alright ";
	char str8[] = "if we just keep dancing like we're 22";

	printf("Combined Result 1: %s\n", ft_strcat(str1, str2));
	printf("Combined Result 2: %s\n", ft_strcat(str3, str4));
	printf("Combined Result 3: %s\n", ft_strcat(str5, str6));
	printf("Combined Result 4: %s\n", ft_strcat(str7, str8));
}
*/
