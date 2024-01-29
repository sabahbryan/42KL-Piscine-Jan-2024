/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:12:43 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/29 14:12:44 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	p;

	p = 0;
	if (argc > 0)
	{
		while (argv[0][p] != '\0')
		{
			ft_putchar(argv[0][p]);
			p++;
		}
		ft_putchar('\n');
	}
	return (0);
}
