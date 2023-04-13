/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:03:31 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/06 18:09:46 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0' && str[i] >= 'A' && str[i] <= 'Z')
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	*str;

	str = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	ft_str_is_uppercase(str);
	printf ("%d\n", ft_str_is_uppercase(str));
}*/
