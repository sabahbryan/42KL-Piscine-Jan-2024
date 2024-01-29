/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:15:56 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/29 21:36:36 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
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

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*arg;

	x = 1;
	while (x < argc)
	{
		y = x;
		while (ft_strcmp(argv[y], argv[y - 1]) < 0 && y > 1)
		{
			arg = argv[y - 1];
			argv[y - 1] = argv[y];
			argv[y] = arg;
			y--;
		}
		x++;
	}
	ft_print_params(argc, argv);
	return (0);
}
