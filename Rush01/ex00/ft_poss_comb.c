/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poss_comb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:00:47 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/05 17:26:43 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_exec(char *str, char *Chosen_one);
{
	
}
void	ft_poss_comb(char *str)
{
	char	twotwo[6][7] = {{3 2 4 1}, {3 1 4 2}, {2 1 4 3}, {1 4 2 3}, {2 4 1 3}, {3 4 1 2}};
	char	*fourone[] = {"1 2 3 4" "4 3 2 1"};
	char	*treetwo[] = {"2 3 4 1" "1 3 4 2" "1 2 4 3" "1 4 3 2" "2 4 3 1" "3 4 2 1"};
	char	*treeone[] = {"2 1 3 4" "2 3 1 4" "4 3 1 2" "4 1 3 2"};
	char	*twoone[] = {"3 1 2 4" "3 2 1 4" "4 2 1 3" "4 1 2 3"};
	char	*Chosen_one;

	write (1, comb[0][0], 7);
}

int	main(void)
{
	char	*str;

	str = "1 3 2 3 3 1 3 2 1 2 3 2 3 2 1 2";
	ft_poss_comb(str);
}
