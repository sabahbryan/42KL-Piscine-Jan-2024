/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:59:25 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/27 15:08:30 by bryaloo          ###   ########.fr       */
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

	x = argc - 1;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		x--;
		ft_putchar('\n');
	}
	return (0);
}
