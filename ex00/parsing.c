/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-hans <iel-hans@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+ i  +#+           */
/*   Created: 2026/02/07 21:21:30 by iel-hans          #+#    #+#             */
/*   Updated: 2026/02/08 00:44:47 by iel-hans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	solving(int *grid, int *clues, int pos)
{
	//backtracking
	//sudoku shit
	//call for the function to check_all or sumthin
}

int     testprint(int *clues)
{
        int     i;
        i = 0;
        while (i < 5)
        {
                write(1, &clues[i], 1);
                i++;
        }
}


int	parsing(char str[], int *clues)
{
	int	i;
		 
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (str[i+1] == ' ')
			{
				clues[i] = str[i] - '0';
				i + 2;
			}
		}	
		else
			return(0);
	}
	/*
	i = 0;
	ii = 0;
	while (i < 17)
	{
		clues[i] = str[ii] - '0';
		i +=1;
		ii += 2;
	}*/
	testprint(clues);
	return (1); 
}

int	main(int argc, char **argv)
{
	int	grid[16];
	int	clues[16];

	if(argc != 2 || !parsing(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}

/*	if(solving(grid, clues, 0))
	{
		display(grid);
	}
	else
		write(1, "Error\n", 6);*/

	parsing(argv[1], clues);

	return(1);
}
