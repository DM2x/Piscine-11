/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:20:18 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/12 12:21:11 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	i = 1;
	while (i < argc - 1)
	{
		i2 = 1;
		while (i2 < argc - 1)
		{
			if (ft_strcmp(argv[i2], argv[i2 + 1]) > 0)
			{
				ft_swap(&argv[i2], &argv[i2 + 1]);
			}
			i2++;
		}
		i++;
	}
	i2 = 1;
	while (i2 < argc)
	{
		ft_putstr(argv[i2]);
		ft_putchar('\n');
		i2++;
	}
	return (0);
}
