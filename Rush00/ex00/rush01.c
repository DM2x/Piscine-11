/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:00:29 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/01/29 14:59:51 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_line(int x, char lft, char mdl, char rgt)
{
	int	p;

	p = 0;
	while (p < x)
	{
		if (p == 0)
		{
			ft_putchar(lft);
		}
		else if (p == x -1)
		{
			ft_putchar(rgt);
		}
		else
		{
			ft_putchar(mdl);
		}
			p++;
	}
}

void	ft_exec(int x, int y)
{
	int	p;

	p = 0;
	while (p < y)
	{
		if (p == 0)
		{
			ft_line(x, '/', '*', '\\');
		}
		else if (p == y -1)
		{
			ft_line(x, '\\', '*', '/');
		}
		else
		{
			ft_line(x, '*', ' ', '*');
		}
		ft_putchar('\n');
		p++;
	}
}

void	rush(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		ft_exec(x, y);
	}
	else
	{
		write (2, "Please enter a positive integer.\n", 33);
	}
}
