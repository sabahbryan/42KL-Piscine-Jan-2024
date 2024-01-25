/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahni <asahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:36:58 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/13 19:20:15 by asahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// prototping the ft_putchar from ft_putchar.c
// prototping the str_to_int from rush02.c
// prototping the filler_finder from rush02.c
// prototping the filler_printer from rush02.c
void	ft_putchar(char c);
int		str_to_int(char *c);
int		filler_finder(int x);
void	filler_printer(int f, char c, int size, char end);

// main print function
// uses the design for rush04
void	print_box_04(int width, int height, int fwidth, int fheight)
{
	int	index;

	index = 0;
	if (width > 0 && height > 0)
	{
		ft_putchar('A');
		filler_printer(fwidth, 'B', width, 'C');
		ft_putchar('\n');
		while (index < fheight)
		{
			ft_putchar('B');
			filler_printer(fwidth, ' ', width, 'B');
			ft_putchar('\n');
			index++;
		}
		if (height > 1)
		{
			ft_putchar('C');
			filler_printer(fwidth, 'B', width, 'A');
		}
	}
}

// init function
// calls the design function for rush04
void	rush04(char *cwidth, char *cheight)
{
	int	width;
	int	height;
	int	fwidth;
	int	fheight;

	width = str_to_int(cwidth);
	height = str_to_int(cheight);
	fwidth = filler_finder(width);
	fheight = filler_finder(height);
	print_box_04(width, height, fwidth, fheight);
}
