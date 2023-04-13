/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:35 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 12:33:07 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	square;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
	{
		return (0);
	}
	if (nbr == 1)
	{
		return (1);
	}
	square = 2;
	if (nbr >= 2)
	{
		while (square * square <= nbr)
		{
			if (square * square == nbr)
			{
				return (square);
			}
			square++;
		}
	}
	return (0);
}
