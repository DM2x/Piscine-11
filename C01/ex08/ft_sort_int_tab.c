/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:22:08 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/01 20:35:41 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	v;
	int	p;
	int	g;

	v = -1;
	while (++v < (size - 1))
	{
		p = v + 1;
		while (p < size)
		{
			if (tab[v] > tab[p])
			{
				g = tab[v];
				tab[v] = tab[p];
				tab[p] = g;
			}
			p++;
		}
	}
}

/*int     main(void)
{
        int     a[5] = {9, 6, 3, 1, 7}; 
        ft_sort_int_tab(a, 5); 

    int i;
    i = 0;
    while(i < 5)
    {   
        printf("%d", a[i]);
        i++;
    }   
}*/
