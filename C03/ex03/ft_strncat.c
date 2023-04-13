/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:23:38 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 13:18:15 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i] != '\0' && i < nb)
	{
		dest[i2 + i] = src[i];
		i++;
	}
	dest[i2 + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[30] = "Pessoal! Tudo Bem?";
	char	dest[30] = "Ola";

	ft_strncat(dest, src, 8);
	printf ("%s\n", dest);
}*/
