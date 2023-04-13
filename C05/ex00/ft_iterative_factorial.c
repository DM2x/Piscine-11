/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:09:38 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 12:36:18 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	v;
	int	fact;

	v = 1;
	fact = 1;
	while (v <= nb)
	{
		fact = fact * v;
		v++;
	}
	if (nb < 0)
		return (0);
	return (fact);
}

/*#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;
	int	res;

	n = 5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);*/
