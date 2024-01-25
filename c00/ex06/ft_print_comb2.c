/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:09:32 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 18:14:23 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char d)
{
	write(1, &d, 1);
}

void	int_to_char(int a)
{
	int	tens;
	int	ones;

	if (a < 10)
	{
		print_char('0');
		print_char(a + '0');
	}
	else
	{
		tens = a / 10;
		ones = a % 10;
		print_char(tens + '0');
		print_char(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			int_to_char(a);
			print_char(' ');
			int_to_char(b);
			if (a < 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
}
*/
