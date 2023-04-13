/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:44:20 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/15 03:39:23 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	i = 1;
	while (argc > i)
	{
		i2 = 0;
		while (argv[i][i2] != '\0')
		{
			write (1, &argv[i][i2], 1);
			i2++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
