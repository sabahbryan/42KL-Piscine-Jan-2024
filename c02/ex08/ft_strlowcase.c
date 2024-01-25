/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:28:55 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/23 19:22:34 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
		{
			str[l] = str[l] + 32;
		}
		l++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "SIR, THIS IS WENDY'S";
	char	str2[] = "i IdEnTiFy As An ApAcHe AtTaCk HeLiCoPtEr";
	char	str3[] = "";
	char	str4[] = "1! TELL @2# ME $3% WHY? ^";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
}
*/
