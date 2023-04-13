/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:51:00 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/01 20:28:43 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str = str + 1;
	}
}

/*int	main(void)
{
	char	*str;

	str = "alow galera\n";
	ft_putstr(str);
	return (0);
}*/
