 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:05:50 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 18:13:11 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char d)
{
	write(1, &d, 1);
}

void	print_comb(char a, char b, char c)
{
	print_char(a + '0');
	print_char(b + '0');
	print_char(c + '0');
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	print_char(',');
	print_char(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0; 
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
}
*/
