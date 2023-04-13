/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:11:23 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/15 19:11:31 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_strcpy(char *src, char *dest, long cur_position)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[cur_position] = src[i];
		i++;
		cur_position++;
	}
	return (cur_position);
}

void	ft_append_all(int size, char **strs, char *sep, char *result)
{
	int		index;
	long	cur_position;

	index = 0;
	cur_position = 0;
	while (index < size)
	{
		cur_position = ft_strcpy(strs[index], result, cur_position);
		if (index != (size - 1))
			cur_position = ft_strcpy(sep, result, cur_position);
		index++;
	}
	result[cur_position] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	long	total_len;
	int		sep_len;
	int		index;

	if (size == 0)
	{
		result = malloc(1);
		*result = 0;
		return (result);
	}
	total_len = 0;
	sep_len = ft_strlen(sep);
	index = 0;
	while (index < size)
	{
		total_len += ft_strlen(strs[index]);
		total_len += sep_len;
		index++;
	}
	total_len -= sep_len;
	result = malloc((total_len + 1) * sizeof(*result));
	if (result != NULL)
		ft_append_all(size, strs, sep, result);
	return (result);
}
