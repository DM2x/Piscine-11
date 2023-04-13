/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:14:04 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/01 20:27:07 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 42;
	*b = 24;
	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
	return (0);
}*/
