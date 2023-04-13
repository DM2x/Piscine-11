/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:06:11 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/07 13:49:26 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		ft_putchar('\\');
		ft_putchar("0123456789abcdef"[str[i] / 16]);
		ft_putchar("0123456789abcdef"[str[i] % 16]);
	}	
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	str[30] = "Ola\nesta bem?";

	ft_putstr_non_printable(str);
}*/
