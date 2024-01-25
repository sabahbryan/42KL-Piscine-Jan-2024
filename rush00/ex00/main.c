/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahni <asahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:36:27 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/13 19:25:10 by asahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// prototping the ft_putchar from ft_putchar.c
// prototping the rush00 from rush00.c
// prototping the rush01 from rush01.c
// prototping the rush02 from rush02.c
// prototping the rush03 from rush03.c
// prototping the rush04 from rush04.c

void	ft_putchar(char c);
void	rush00(char *cwidth, char *cheight);
void	rush01(char *cwidth, char *cheight);
void	rush02(char *cwidth, char *cheight);
void	rush03(char *cwidth, char *cheight);
void	rush04(char *cwidth, char *cheight);

// function to print strings
// logic being it loops through the string
// print each seperate character
// until it reachs a null pointer
void	ft_putstr(char *str)
{
	char	x;

	x = *str;
	while (x != '\0')
	{
		x = *str;
		ft_putchar(x);
		str++;
	}
}

// chooses which design to use
// depends on the input given
// if the input given is invalid ouptuts error msg
void	design_choice(char *cwidth, char *cheight, char choice)
{
	if (choice == '0')
		rush00(cwidth, cheight);
	else if (choice == '1')
		rush01(cwidth, cheight);
	else if (choice == '2')
		rush02(cwidth, cheight);
	else if (choice == '3')
		rush03(cwidth, cheight);
	else if (choice == '4')
		rush04(cwidth, cheight);
	else
		ft_putstr("ERROR NOT A VALID DESIGN");
}

// main function
// uses arguments to decide size and design
// prints error msgs if not enough or to many inputs
int	main(int argc, char *argv[])
{
	if (argc < 4)
		ft_putstr("ERROR NOT ENOUGH INPUTS");
	else if (argc > 4)
		ft_putstr("ERROR TOO MANY INPUTS");
	else
		design_choice(argv[1], argv[2], argv[3][0]);
}
