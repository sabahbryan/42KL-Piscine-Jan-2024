/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:40:42 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 18:10:39 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	num;

	i = 0;
	while (i <= 9)
	{
		num = i + '0';
		write(1, &num, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}
*/
