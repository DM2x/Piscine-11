/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:31:30 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 12:19:44 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 0;
	while (dest[p] != '\0')
		p++;
	if (size != 0 && size < p)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[p + i] = src[i];
			i++;
		}
		dest[p + i] = '\0';
		while (src[i] != '\0')
			i++;
		return (i + p);
	}
	return (i + p);
}
