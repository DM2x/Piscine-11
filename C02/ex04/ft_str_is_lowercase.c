/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:04:30 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/07 14:00:10 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*int   main(void)
{
        char    *str;

        str = "abcdfghijklmnopqrstuvxyz";
        ft_str_is_lowercase(str);
        printf ("%d\n", ft_str_is_lowercase(str));
}*/
