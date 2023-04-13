/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:07:57 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/14 15:50:24 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[i2] == 0)
		return (str);
	while (str[i])
	{
		while (str[i + i2] && str[i + i2] == to_find[i2])
			i2++;
		if (to_find[i2] == '\0')
			return (str + i);
		i++;
		i2 = 0;
	}
	return (0);
}

/*int     main(void)
{
        char    str[] = "Hello miss and mister 42";
        char    to_find[] = "mister";
        printf("Return: %s\n", ft_strstr(str, to_find));
}*/
