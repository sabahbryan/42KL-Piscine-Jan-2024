/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:36:53 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/25 18:09:04 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 122;
	while (r >= 97)
	{
		write(1, &r, 1);
		r--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}
*/
