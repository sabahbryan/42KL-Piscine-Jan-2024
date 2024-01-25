/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:42:28 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/24 21:09:17 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Smooth like butter,";
	char str2[] = "like a criminal undercover";
	char str3[] = "Gon' pop like trouble";
	char str4[] = "breaking into your heart like that";

	printf("Comparison Result 1: %d\n", ft_strncmp(str1, str2, 5));
	printf("Comparison Result 2: %d\n", ft_strncmp(str1, str3, 5));
	printf("Comparison Result 3: %d\n", ft_strncmp(str1, str4, 5));
}
*/
