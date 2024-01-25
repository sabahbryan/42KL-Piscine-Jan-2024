/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:15:38 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 18:11:30 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-9);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(9);
	write(1, "\n", 1);
}
*/
