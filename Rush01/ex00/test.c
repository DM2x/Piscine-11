/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:02:13 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/05 14:11:54 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_poss_comb(char *str)
{
        write (1, str, 31); 
}

void    ft_error_check(char *str)
{
        int     i;
        int     i2;

        i = 0; 
        i2 = 1;
        while (str[i] != '\0' && str[i] >= '1' && str[i] <= '4' && str[i2] == ' ')
        {
                i += 2;
                i2 += 2;
        }   
        if (str[i2] != '\0')
                write (2, "Error!\n Please enter 16 integers between 1 and 4, with spaces in between.\n", 73);
        else
        {
		 i = 0;
                i2 = 8;
	}
                while ((str[i] + str[i2]) >= 'c' && (str[i] + str[i2]) <= 'e')
                {
                        i += 2;
                        i2 +=2;
                }
                if ((str[i2] -1) == '\0')
                        ft_poss_comb(str);
                else
                        write (2, "\nError!\n No Solution!\n", 22);
}

int     main(int argc, char **argv)
{
        char    str[32];
        int             i;  

	if (argc == 2)
	{
        	i = 0;
        	while (argv[1][i] != '\0')
        	{   
                	str[i] = argv[1][i];
                	i++;
        	}   
        	ft_error_check(str);
	}
	else
		write (2, "Error!\n Please enter only 'name file' and 'the parameters'.\n", 60);
}
