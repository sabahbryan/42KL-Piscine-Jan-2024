/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:30:06 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 15:15:07 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				ft_putchar(argv[x][y]);
				y++;
			}
			x++;
			ft_putchar('\n');
		}
	}
	return (0);
}
