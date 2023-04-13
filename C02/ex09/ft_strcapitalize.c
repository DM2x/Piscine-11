/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:24:47 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/07 12:08:00 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_str_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	*ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (i == 0)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_lowcase(str);
	ft_str_is_uppercase(str);
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'
				&& str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || str[i] > 'z')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else
				i--;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str);
	printf ("%s\n", ft_strcapitalize(str));
}*/
