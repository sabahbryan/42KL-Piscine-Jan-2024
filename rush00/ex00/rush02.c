/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahni <asahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:36:58 by bryaloo           #+#    #+#             */
/*   Updated: 2024/01/13 19:24:36 by asahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// prototping the ft_putchar from ft_putchar.c
void	ft_putchar(char c);

// string to int converter
// logic being it loops through the string
// saving the number into a result int
// until it reachs a null pointer
// but to create a number that is more than one digit
// we must multiply the result int by 10 for every digit
// this way the ones tens etc. works out
// and we get the actualy multi digit int we want

int	str_to_int(char *c)
{
	int	x;
	int	r;

	x = 0;
	r = 0;
	while (c[x] != '\0')
	{
		if (c[x] >= '0' && c[x] <= '9')
			r = r * 10 + (c[x] - '0');
		x++;
	}
	return (r);
}

// removes 2 from the input
// logic being, spliting edge cases and filler cases
// so the front and back edges will be removed
// and the return value will be the filler
// but if the number is smaller than 2
// there is no filler so return 0
int	filler_finder(int x)
{
	if (x > 2)
		return (x - 2);
	else
		return (0);
}

// prints out the filler values
// used to test if the filler is needed
// then prints it
// this is done by compaaring to zero
// logic being if more than zero then temp is give value
// else the value of temp is zero so it does not run
// but if more than zero
// then prints out the requierd amount of fillers
// after that it also adds the final character
// this is done by taking in the size and end values
// the size is an int which is used to make the logic
// to see if the end value needs to printed in the first place
// and end is a char that is the char to print
void	filler_printer(int f, char c, int size, char end)
{
	int	temp;

	temp = 0;
	if (f > 0)
		temp = f + 1;
	while (--temp > 0)
		ft_putchar(c);
	if (size > 1)
		ft_putchar(end);
}

// main print function
// is called with all the values
// print out the first line
// this is done by printing the front end
// then calling the filler printer
// this prints out the filler charaters and the final line
// inbtween the first line filler and final line
// there are new line charaters as well
void	print_box_02(int width, int height, int fwidth, int fheight)
{
	int	index;

	index = 0;
	if (width > 0 && height > 0)
	{
		ft_putchar('A');
		filler_printer(fwidth, 'B', width, 'A');
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
			filler_printer(fwidth, 'B', width, 'C');
		}
	}
}

// init function
// initializes all the main values
// width and height are converted to int
// fwidth and fhieght are created
// the main print function is then called
void	rush02(char *cwidth, char *cheight)
{
	int	width;
	int	height;
	int	fwidth;
	int	fheight;

	width = str_to_int(cwidth);
	height = str_to_int(cheight);
	fwidth = filler_finder(width);
	fheight = filler_finder(height);
	print_box_02(width, height, fwidth, fheight);
}
