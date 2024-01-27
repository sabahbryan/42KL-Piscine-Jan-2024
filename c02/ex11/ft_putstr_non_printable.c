/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:10:39 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 22:05:29 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char_to_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_char_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello\nWorld!\tNonPrintable\x01";
	char	str2[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);
	return (0);
}
*/
