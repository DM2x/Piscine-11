/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:35:00 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/15 08:38:47 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	ptr = (int *) malloc(len * sizeof(int));
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	i = 0;
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (len);
}
