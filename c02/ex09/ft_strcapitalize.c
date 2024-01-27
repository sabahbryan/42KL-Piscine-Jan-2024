/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:39:22 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 19:21:17 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	word;
	unsigned int	new_word;
	char			c;

	word = 0;
	new_word = 1;
	while (str[word] != '\0')
	{
		c = str[word];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[word] = str[word] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[word] = str[word] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		word++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hELLO wORLD";
	char 	str2[] = "sHeLl c00 pIsCiNe24 cAdEt";
	char	str3[] = "abc! def@ ghi# jkl$ mno%";
	char	str4[] = "salut, comment tu vas ?";
	char	str5[] = "42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
}
*/
