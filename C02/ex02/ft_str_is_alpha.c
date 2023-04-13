/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:52:31 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/08 02:37:55 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z' || str[i] < 'A') && (str[i] > 'z' || str[i] < 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "abcDFGhijKLMnopQRStuvXYZ";
	ft_str_is_alpha(str);
	printf ("%d\n", ft_str_is_alpha(str));
}*/
