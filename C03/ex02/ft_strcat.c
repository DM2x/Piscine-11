/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:13:26 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 13:14:07 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i] != '\0')
	{
		dest[i2 + i] = src[i];
		i++;
	}
	dest[i2 + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str[30] = "pessoal!";
	char	dest[30] = "Ola";

	ft_strcat(dest, str);
	printf ("%s\n", dest);
}*/
