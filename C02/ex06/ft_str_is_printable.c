/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:10:39 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/06 18:17:40 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0' && str[i] >= 32 && str[i] < 127)
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

	str = "Ola Pessoal!";
	ft_str_is_printable(str);
	printf ("%d\n", ft_str_is_printable(str));
}*/
