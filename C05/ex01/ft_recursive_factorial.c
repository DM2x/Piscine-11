/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:14 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 12:36:31 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;
	int	res;

	nb = -5;
	while (nb <= 10)
	{
		res = ft_recursive_factorial(nb);
		printf("> n = %d, n! = %d\n", nb, res);
		nb++;
	}
	return (0);
}*/
