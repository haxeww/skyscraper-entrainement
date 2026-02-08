/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SC.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-hans <iel-hans@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 00:47:48 by iel-hans          #+#    #+#             */
/*   Updated: 2026/02/08 02:38:39 by iel-hans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	parsing(char *inp, int *clues)
{
	int	i;

	i = 0;
	while (inp[i])
        {
                i++;
        }
        if (i != 31)
                return (0);
	i = 0;
	while (inp[i])
	{
		while ((inp[i] >= '1' && inp[i] <= '4') && inp[i+1] == ' ')
		{
			if (inp[i] >= '1' && inp[i] <= '4')
			{	
				if(i == 30)
				{
					clues[i] = inp[i] - '0';
					return(1);
				}
				if (inp[i+1] == ' ')
				{
					clues[i] = inp[i] - '0';
					i = i + 2;
				}

			}
			else
				return (0);
		}
		return (1);
	}
                return (0);
	return (1);
}




int	main(int argc, char **argv)
{
	int	grid[16];
 	int	clues[16];

	// if argc is not equal to 2 AND parsing failed
	if(argc != 2 || !parsing(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
/*
	if (solving(grid, clues, 0))
	{
		display(grid);
	}*	
	else
		write(1, "Error\n", 6);*/

	return (1);
}
