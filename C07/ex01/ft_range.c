/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:57:51 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/15 07:54:44 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
		return (0);
	len = max - min;
	ptr = (int *) malloc(len * sizeof(int));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
